/* Write a C program to read and display a string using character pointer simple example */
#include <stdio.h>

int main() 
{
    char str[] = "bhavy";
    char *p = str;

    while(*p != '\0') 
    {
        printf("%c", *p);
        p++;
    }

    return 0;
}