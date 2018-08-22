#include <stdio.h>

struct
{
    unsigned int width;
    unsigned int height;
} status;

struct
{
    unsigned int width : 1;
    unsigned int height : 1;
} status2;

int main(int argc, char const *argv[])
{
    printf("Memory size status: %d\n", sizeof(status));
    printf("Memory size status2: %d\n", sizeof(status2));
    return 0;
}
