#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

char buffer[2048];

int copy(int old, int newfd); // Function prototype

int main(int argc, char *argv[]) {
    int fdold, fdnew;

    if (argc != 3) {
        printf("Need 2 arguments for copy program\n");
        exit(1);
    }

    fdold = open(argv[1], O_RDONLY); /* OPEN SOURCE FILE READ ONLY */
    
    if (fdold == -1) {
        printf("Cannot open file %s\n", argv[1]);
        exit(1);
    } 

    fdnew = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666); /* Create target file rw for all */
    if (fdnew == -1) {
        printf("Cannot create file %s\n", argv[2]);
        exit(1);
    }
    copy(fdold, fdnew);
    close(fdold);
    close(fdnew);
    return 0; // Proper return at the end of main
}

int copy(int old, int newfd) {
    int count;

    while ((count = read(old, buffer, sizeof(buffer))) > 0)
        write(newfd, buffer, count);

    return 0; // Assuming successful operation
}
