#include <stdio.h>
#include <string.h>

void strcpy2(char *, char *);

int main(int argc, char const *argv[])
{
    char amess[] = "i have a pen";
    char * amess2 = "i have an apple";
    char * amess3;
    size_t len;
    printf("amess: %s\n", amess);
    printf("amess2: %s\n", amess2);
    printf("amess3: %s\n", amess3);

    amess2 = "i have a dream";
    printf("amess2: %s\n", amess2);

    size_t a = 1;
    printf("a: %lu\n", a);

    // strcpy(amess3, amess2);
    // printf("amess3: %s\n", amess3);

    len = strlen(amess);
    printf("amess len: %lu\n", len);

    len = strlen(amess2);
    printf("amess2 len: %lu\n", len);

    return 0;
}

// void strcpy2(char *s, char *t)
// {
//     int i = 0;
//     while ((s[i] = t[i]) != '\0') {
//         i++;
//     }
// }

void strcpy2(char *s, char *t)
{
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
}
