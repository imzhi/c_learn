#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int *getRand();

int main(int argc, char const *argv[])
{
    int *p = getRand();
    int i;
    for (i = 0; i < 10; ++i) {
        printf("p[%d] = %d\n", i, *(p + i));
    }
    return 0;
}

int *getRand()
{
    static int r[10];
    int i;
    srand( (unsigned)time( NULL ) );
    for ( i = 0; i < 10; ++i) {
        r[i] = rand();
        printf( "r[%d] = %d\n", i, r[i]);
    }
    return r;
}
