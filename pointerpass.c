#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *);

int main(int argc, char const *argv[])
{
    unsigned long sec;

    getSeconds(&sec);

    printf("Number of seconds: %ld\n", sec);

    return 0;
}

void getSeconds(unsigned long *par)
{
    *par = time(NULL);
    return;
}
