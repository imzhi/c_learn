#include <stdio.h>

#ifndef MESSAGE_FOR
#define MESSAGE_FOR(a, b) printf(#a " and " #b ": we love you!\n");
#endif

#ifndef square
#define square(x) ((x) * (x))
#endif

int main(int argc, char const *argv[])
{
    MESSAGE_FOR(Carole, Debra);
    printf("%d\n", square(2));
    return 0;
}
