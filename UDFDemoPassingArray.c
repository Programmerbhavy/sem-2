/*
WAP to show demo of User Defined Function where
we will be able to pass Array as Reference to the function
and display the array elements inside the function.
 */
#include <stdio.h>
#include <stdlib.h>
// Function to display array elements
void displayArray(int arr[], int size)
{
    printf("\nArray Elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
}
int main()
{
    // Program without using malloc
    int arr1[5] = {101, 202, 303, 404, 505};
    printf("Enter 5 elements for arr1:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }
    // Call the function to display array elements
    displayArray(arr1, 5);
    // Value checking after function call
    printf("\nArray elements in main() after function call:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i + 1, arr1[i]);
    }
    return 0;
}