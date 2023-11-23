#include <stdarg.h>
#include <stdio.h>
int main()
{
    int num = __SIZEOF_INT__;
    printf("%d\n", putchar(num));
    printf("%c\n", putchar('4') - putchar('0'));

    return 0;
}