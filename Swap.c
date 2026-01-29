//swap demo call by refrence  

#include<stdio.h>


void swapeme(int *a,int *b)
{
 int temp = *a;
 *a=*b;
 *b=temp;
 }

int main()
{
int x = 10,y=20;
printf("before swapping :- x=%d , y=%d\n",x,y);
swapeme(&x,&y);
printf("after swapping :- x=%d , y=%d",x,y);


return 0;

}