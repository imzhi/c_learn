/**
 * C语言指针详解<https://blog.csdn.net/constantin_/article/details/79575638>
 *
 * @author imzhi
 * @date   2018-08-23
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int func6(char *);
void func6_2(char **);

int main(int argc, char const *argv[])
{
    char str1[20] = "iloveyou012345678912";
    int *ptr1 = (int *) str1;
    printf("*ptr1: %c\n", *ptr1);
    ptr1++; // 指向的内存地址向前移动 4 个字节
    printf("*ptr1: %c\n", *ptr1);

    int num2 = 1;
    int *ptr2;
    ptr2 = &num2;
    printf("*ptr2: %d\n", *ptr2);
    *ptr2 = 2;
    printf("*ptr2: %d\n", *ptr2);
    num2 = 3;
    printf("*ptr2: %d\n", *ptr2);

    // 三、运算符&和*
    int num3 = 1;
    int num3_2 = 2;
    int num3_3 = 3;
    int *ptr3 = &num3;
    printf("sizeof(ptr3): %d\n", sizeof(ptr3));
    printf("sizeof(*ptr3): %d\n", sizeof(*ptr3));
    int **pptr3 = &ptr3;
    printf("**pptr3: %d\n", **pptr3);
    *pptr3 = &num3_2;
    printf("**pptr3: %d\n", **pptr3);
    **pptr3 = num3_3;
    printf("**pptr3: %d\n", **pptr3);

    // 五、数组和指针的关系
    int arr4[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int val4 = arr4[0];
    printf("val4: %d\n", val4);
    val4 = arr4[3];
    printf("val4: %d\n", val4);
    val4 = arr4[4];
    printf("val4: %d\n", val4);

    char *str4[3] = {
        "Hello,thisisasample!",
        "Hi,goodmorning.",
        "Helloworld"
    };
    printf("str4[0]: %s\n", str4[0]);
    printf("str4[1]: %s\n", str4[1]);
    printf("str4[2]: %s\n", str4[2]);
    char str4_2[80];
    strcpy(str4_2, str4[0]);
    printf("str4_2: %s\n", str4_2);
    strcpy(str4_2, str4[1]);
    printf("str4_2: %s\n", str4_2);
    strcpy(str4_2, str4[2]);
    printf("str4_2: %s\n", str4_2);
    printf("sizeof(str4): %d\n", sizeof(str4)); // 24 = 3 * 8，一个指针地址占 8 字节空间
    printf("sizeof(*str4): %d\n", sizeof(*str4));
    printf("*str4: %s\n", *str4);
    int arr4_2[10];
    int (*ptr4)[10];
    ptr4 = &arr4_2;
    printf("sizeof(ptr4): %d\n", sizeof(ptr4));
    printf("sizeof(*ptr4): %d\n", sizeof(*ptr4));
    printf("sizeof(int(*)[10]): %d\n", sizeof(int(*)[10]));
    printf("sizeof(int[10]): %d\n", sizeof(int[10]));

    // 六、指针和结构类型的关系
    struct struct5
    {
        int a;
        int b;
        int c;
    };
    struct struct5 struct_5 = {1, 2, 3};
    struct struct5 *ptr5 = &struct_5;
    printf("ptr5->a: %d\n", ptr5->a);
    printf("ptr5->b: %d\n", ptr5->b);
    printf("ptr5->c: %d\n", ptr5->c);

    // 七、指针和函数的关系
    char *str6 = "abcdef";
    char str6_2[10] = "ccccc";
    int num6 = func6(str6);
    printf("num6: %d\n\n", num6);
    printf("str6: %s\n", str6);
    func6_2(&str6);
    printf("str6: %s\n", str6);
    // printf("str6_2: %s\n", str6_2);
    // func6_2(*str6_2);
    // printf("str6_2: %s\n", str6_2);

    return 0;
}

int func6(char *s)
{
    int num = 0;
    while (*s++) {
        num += *s;
    }
    return num;
}

void func6_2(char **s)
{
    printf("*s strlen: %d\n", strlen(*s));
    printf("*s sizeof: %d\n", sizeof(*s));
    printf("**s sizeof: %d\n", sizeof(**s));
    printf("*s: %s\n\n", *s);
    char *p = "0123456798";
    // *s = (char *) malloc(strlen(p) * sizeof(p));
    printf("*s strlen: %d\n", strlen(*s));
    printf("*s sizeof: %d\n", sizeof(*s));
    printf("**s sizeof: %d\n", sizeof(**s));
    printf("*s: %s\n\n", *s);
    *s = p;
    printf("*s strlen: %d\n", strlen(*s));
    printf("*s sizeof: %d\n", sizeof(*s));
    printf("**s sizeof: %d\n", sizeof(**s));
    printf("*s: %s\n\n", *s);
}
