// wap to show demo of pointer different data type in c.
#include <stdio.h>

int main()
{
    int a = 10;
    int *p;Ṇ

    p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %u\n", &a);
    printf("Value of p = %u\n", p);
    printf("Value at address p = %d\n", *p);

    *p = 111;
    printf("\nValue Of A = %d\n", a);
    return 0;
}