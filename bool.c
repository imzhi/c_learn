#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    _Bool a = false;
    _Bool b = true;
    _Bool c = 1000;
    printf("a(false): %d, sizeof: %d\n", a, sizeof(a));
    printf("b(true): %d, sizeof: %d\n", b, sizeof(b));
    printf("c(1000): %d, sizeof: %d\n", c, sizeof(c));
    return 0;
}
