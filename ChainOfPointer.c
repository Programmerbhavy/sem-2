// WAP TO SHOW DEMO OF CHAIN OF POINTERS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 100;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;

    printf("Value of a: %d\n", a);
    printf("Value of a using p1: %d\n", *p1);
    printf("Value of a using p2: %d\n", **p2);
    printf("Value of a using p3: %d\n", ***p3);

    printf("Address of a : %d\n", &a);
    printf("Address stored in p1 : %d\n", p1);
    printf("Address stored in p2 : %d\n", p2);
    printf("Address stored in p3 : %d\n", p3);
    ***p3 = 20;
    printf("After changing : %d\n", a);
    printf("Address of a P3 : %d\n", &a);
    return 0;
}