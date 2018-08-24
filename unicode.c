/**
 * https://zh.wikibooks.org/wiki/C/%E5%9F%BA%E6%9C%AC%E6%95%B0%E6%8D%AE%E7%B1%BB%E5%9E%8B#Unicode
 * Cygwin 命令行无法打印出中文字符，Ubuntu 终端打印出 3 个问号
 * @author imzhi
 * @date   2018-08-24
 */

#include <stdio.h>
#include <wchar.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    wchar_t str[100] = L"我是你";
    wprintf(L"Output: %ls\n", (const wchar_t*) str);
    return 0;
}
