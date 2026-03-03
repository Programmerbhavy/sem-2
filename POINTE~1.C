/*
WAP to show demo of pointer of different data types in c.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
 {

    int a = 999;
    float b = 20.5f;
    char c = 'A';
    float *pFloat = &b;
    int *pInt = &a;
    char *pChar = &c;
    double d = 30.12345;
    double *pDouble = &d;
    clrscr();

    printf("Integer Value: %d, Address: %p\n", *pInt, (void*)pInt);
    printf("Integer Value: %d, Address: %p\n", *pInt, (void*)&a);

    printf("Float Value: %.2f, Address: %p\n", *pFloat, (void*)pFloat);

    printf("Char Value: %c, Address: %p\n", *pChar, (void*)pChar);

    printf("Double Value: %.5lf, Address: %p\n", *pDouble, (void*)pDouble);

getch();
}
