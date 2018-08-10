#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main(int argc, char const *argv[])
{
    int errnum;
    FILE *pf = fopen("unexist.txt", "rb");
    if (pf == NULL) {
        errnum = errno;
        fprintf(stderr, "errno:%d\n", errno);
        perror("perror");
        perror("");
        fprintf(stderr, "err:%s\n", strerror(errnum));
    } else {
        fclose(pf);
    }
    return 0;
}
