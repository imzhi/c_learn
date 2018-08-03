#include <stdio.h>

int main()
{
    int num = 5;
    int num2 = 6;
    const int *pt = &num;
    printf("%d\n", *pt);
    pt = &num2;
    printf("%d\n", *pt);

    printf("num: %d\n", num);
    printf("num2: %d\n", num2);

    int * const pt2 = &num;
    printf("%d\n", *pt2);
    *pt2 = num2;
    printf("%d\n", *pt2);

    printf("num: %d\n", num);
    printf("num2: %d\n", num2);

    int * const * pt3 = &pt2;
    printf("%d\n", **pt3);
    **pt3 = num;
    printf("%d\n", **pt3);

    printf("num: %d\n", num);
    printf("num2: %d\n", num2);

    char * str = "abc";
    printf("%s\n", *(str+1));

    return 0;
}
