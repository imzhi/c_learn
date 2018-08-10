#include <stdio.h>

unsigned int factorial(unsigned int);

int main(int argc, char const *argv[])
{
    int i;
    scanf("%d", &i);
    printf("%d factorial: %d\n", i, factorial(i));
    return 0;
}

unsigned int factorial(unsigned int i)
{
    if (i <= 1) {
        return 1;
    } else {
        return i * factorial(i - 1);
    }
}
