/* Write a C program to pass an array to a function using pointer and display its elements.*/
#include <stdio.h>      
void display(int *arr) 
{  
    printf("Elements of the array: \n");  
    for (int i = 0; i < 5; i++)
 {  
        printf("%d ", *(arr + i));  
    }  
    printf("\n");  
}
int main() 
{  
    int arr[5] = {101, 202, 303, 404, 505};  
    display(arr);  
    return 0;  
}