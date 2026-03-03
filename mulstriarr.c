/*“Write a C program to store and display multiple strings using array of character pointers  using pointer.”*/

#include <stdio.h>

int main()
{
    char *names[10] = {"bhavy", "mayur", "kavy", "meet", "adi", "hiren", "harsh", "nayan", "sonu", "tapu"};
    int i;

    printf("Names stored in the array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}