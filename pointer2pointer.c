#include <stdio.h>

int main(int argc, char const *argv[])
{
    int var = 3000;
    int *ptr;
    int **pptr;
    ptr = &var;
    pptr = &ptr;
    printf("pptr value: %d\n", **pptr);
    return 0;
}
