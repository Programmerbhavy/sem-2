// WAP to show demo how data is stored in Array using pointer in c Also it should display Address of each element using pointer arithmetic.
#include <stdio.h>
void main()
{
    int arr[5];
    int *p = arr;
    int i;
    clrscr();

    // Input elements into the array
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", p + i); // Using pointer arithmetic to access array elements
    }

    // Display elements and their addresses
    printf("\nArray elements and their addresses:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Element %d: %d, Address: %p\n", i + 1, *(p + i), (p + i)); // Displaying value and address
    }

getch();
}