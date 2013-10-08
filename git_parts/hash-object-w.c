/**
 * 仕様：
 * echo hello > hello.txt
 * git hash-object -w hello.txt
 * test -e .git/objects/ce/013625030ba8dba906f756967f9e9ca394464a # ok
 * git cat-file -p ce013 # hello
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>


int main(int argc, char **argv) {
    printf("%s\n", argv[1]);

    char *filename = argv[1];

    struct stat st;
    if (lstat(filename, &st)) {
	fprintf(stderr, "unable to stat %s\n", filename);
	exit(1);
    }
    printf("st.size = %ld\n", st.st_size);
    return 0;
}

