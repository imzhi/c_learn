#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

char * concat(int num, ...)
{
    va_list valist;
    static char s[100];
    char *t = (char *) malloc(0);
    char *va;
    va_start(valist, num);
    for (int i = 0; i < num; i++) {
        va = va_arg(valist, char *);
        t = (char *) realloc(t, sizeof(char) * strlen(va));
        printf("realloc:%d\n", sizeof(char) * strlen(va));
        strcpy(t, va);
        printf("t: %s\n", t);
        strcat(s, t);
        printf("s: %s\n", s);
    }
    printf("return s: %s\n", s);
    return s;
}

int main(int argc, char const *argv[])
{
    char *str = concat(3, "i", " love ", "you!");
    printf("str: %s\n", str);
    printf("str len: %d\n", strlen(str));
    return 0;
}
