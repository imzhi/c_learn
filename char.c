#include <stdio.h>

int main(int argc, char const *argv[])
{
    char amess[] = "i have a pen";
    char * amess2 = "i have an apple";

    printf("%s\n", amess);
    printf("%s\n", amess2);

    amess2 = "i have a dream";
    printf("%s\n", amess2);


    size_t a = 1;
    printf("%d\n", a);

    return 0;
}
