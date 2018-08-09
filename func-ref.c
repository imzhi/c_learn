#include <stdio.h>

void swap(int *x, int *y);

int main(int argc, char const *argv[])
{
    int a = 100;
    int b = 200;
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    swap(&a, &b);

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
