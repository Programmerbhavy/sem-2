/*
WAP to show demo of pointwer of different data types in c.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int *pint = &a;

    printf("integer value :- %d ,address :- %p\n", *pint, (void *)pint);
    printf("integer value :- %d ,address :- %p\n", *pint, (void *)&a);
    return 0;
}
