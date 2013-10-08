/**
 * ファイルの(たぶん)inode情報を取得する
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char **argv) {
    printf("%s\n", argv[1]);

    struct stat st;
    char *filename = argv[1];
    if (lstat(filename, &st)) {
	fprintf(stderr, "unable to stat %s\n", filename);
	exit(1);
    }
    printf("st.size = %ld\n", st.st_size);
    return 0;
}

