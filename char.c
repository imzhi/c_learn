#include <stdio.h>
#include <string.h>

void strcpy2(char *, char *);
void strcpy3(char *, char *);
void strcpy4(char *, char *);

int main(int argc, char const *argv[])
{
    char amess[] = "i have a pen";
    char * amess2 = "i have an apple";
    // char * amess3;
    char amess3[100];
    char amess4[100];
    char amess5[100];
    size_t len;
    printf("amess: %s\n", amess);
    printf("amess2: %s\n", amess2);
    printf("amess3: %s\n", amess3);

    amess2 = "i have a dream";
    printf("amess2: %s\n", amess2);

    size_t a = 1;
    printf("a: %lu\n", a);

    strcpy2(amess3, amess2);
    printf("amess3: %s\n", amess3);

    strcpy3(amess4, amess2);
    printf("amess4: %s\n", amess4);

    strcpy4(amess5, amess2);
    printf("amess5: %s\n", amess5);

    char *amess5_3 = amess5 + 3;
    printf("amess5 pos 3: %c\n", amess5[3]);
    printf("amess5 pos 3: %c\n", *amess5_3);

    len = strlen(amess);
    printf("amess len: %lu\n", len);

    len = strlen(amess2);
    printf("amess2 len: %lu\n", len);

    printf("sizeof char: %d\n", sizeof(char));

    return 0;
}

void strcpy2(char *s, char *t)
{
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
}

void strcpy3(char *s, char *t)
{
    int i = 0;
    while ((s[i] = t[i]) != '\0') {
        i++;
    }
}

void strcpy4(char *s, char *t)
{
    while ((*s++ = *t++) != '\0')
        ;
}
