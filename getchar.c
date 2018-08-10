#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    char str[100];
    char *pstr;
    printf("Enter a value: ");
    gets(str);
    pstr = str;
    printf("\nYou entered: ");
    puts(pstr);

    printf("Enter a value: ");
    scanf("%s %d", str, &i);
    printf("\nYou entered: %s %d", str, i);
    // scanf("%s", str);
    // printf("\nYou entered: %s", str);
    return 0;
}
