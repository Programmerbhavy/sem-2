/*“Write a C program to find the square of a number using a user defined function 
with no arguments but with return value.”*/

#include <stdio.h>


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