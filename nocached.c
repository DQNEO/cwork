/*
 * a simple echo server
 *
 * original from http://x68000.q-e-d.net/~68user/net/sample/echo-server-1.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/uio.h>
#include <unistd.h>
#include <sys/param.h>
#include <netinet/in.h>
#include <arpa/inet.h>

/* buffer length */
#define BUF_LEN 256

/* 
   read a line from socket,
   store it to a variable 'p'

   return if the server can no longer read from socket.

   return strlen
   regard \0 as end of string
*/
int read_line(int socket, char *p){
  int len = 0;
  while (1){
    int ret;
    ret = read(socket, p, 1);
    if ( ret == -1 ){
      perror("read");
      exit(1);
    } else if ( ret == 0 ){
      break;
    }
    if ( *p == '\n' ){
      p++;
      len++;
      break;
    }
    p++;
    len++;
  }
  *p = '\0';
  return len;
}

void out_string(int socket, char *str) {
  write(socket, str, strlen(str));
}

int main(int argc, char *argv[]){
  int sfd, listening_socket;
  struct sockaddr_in sin;
  int len, ret;
  int sock_optval = 1;
  int port = 5000;

  /* create a listening_socket */
  listening_socket = socket(AF_INET, SOCK_STREAM, 0);
  if ( listening_socket == -1 ){
    perror("socket");
    exit(1);
  }

  /* set socket option */
  if ( setsockopt(listening_socket, SOL_SOCKET, SO_REUSEADDR,
		  &sock_optval, sizeof(sock_optval)) == -1 ){
    perror("setsockopt");
    exit(1);
  }

  /* address family, port number, IP address */
  sin.sin_family = AF_INET;
  sin.sin_port = htons(port);
  sin.sin_addr.s_addr = htonl(INADDR_ANY);

  /* bind */
  if ( bind(listening_socket, (struct sockaddr *)&sin, sizeof(sin)) < 0 ){
    perror("bind");
    exit(1);
  }
  /* listen */
  ret = listen(listening_socket, SOMAXCONN);
  if ( ret == -1 ){
    perror("listen");
    exit(1);
  }
  printf("listening port %d ...\n", port);

  while (1){
    struct hostent *peer_host;
    struct sockaddr_in peer_sin;

    len = sizeof(peer_sin);

    /* accept */
    sfd = accept(listening_socket, (struct sockaddr *)&peer_sin, &len);
    if ( sfd == -1 ){
      perror("accept");
      exit(1);
    }

    /* get client host info */
    peer_host = gethostbyaddr((char *)&peer_sin.sin_addr.s_addr,
			      sizeof(peer_sin.sin_addr), AF_INET);

    if ( peer_host == NULL ){
      printf("gethostbyname failed\n");
    } else {
      printf("new conection from client:%s [%s] port %d\n",
	     peer_host->h_name,
	     inet_ntoa(peer_sin.sin_addr),
	     ntohs(peer_sin.sin_port)
	     );
    }

    while (1){
      int read_size;
      char buf[BUF_LEN];

      read_size = read_line(sfd, buf);
      if ( read_size == 0 ) break;

      printf("message: %s", buf);
      
      //output
      out_string(sfd, "STORED\n");
    }

    printf("connection closed. listening port %d ...\n", port);
    ret = close(sfd);
    if ( ret == -1 ){
      perror("close");
      exit(1);
    }
  }
  ret = close(listening_socket);
  if ( ret == -1 ){
    perror("close");
    exit(1);
  }

  return 0;
}
