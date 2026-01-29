/* “Write a C program to calculate and 
display the area of a circle using a user defined function with arguments but no return value.” */

#include<stdio.h>
#include<stdlib.h>

int calculateSquare();

int main() {
    int result;

    printf("Square Calculation Program\n");
    printf("--------------------------\n");

   
    result = calculateSquare();

    printf("The square of the entered number is: %d\n", result);

    return 0;
}


int calculateSquare() {
    int num;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    return (num * num);
}