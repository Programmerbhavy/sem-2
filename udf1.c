//“Write a C program to define and call a user defined function to find the sum of two integers.”

#include<stdio.h>

int add(int,int);

int main()
{

int result;
result = add(10,5);
printf("sum=%d",result);

return 0; 

}

int add(int a , int b )
{
    return a+b ;
}