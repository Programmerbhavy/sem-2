/* WAP TO SHOW DEMO OF ARRAY WHERE POINTER IS USED TO ACCESS ELEMENTS */
#include <stdio.h>
int main()      
{
  int i;
  int arr[5]= {10, 20, 30, 40, 50};
  int *ptr = arr;


    printf("Elements of the array using pointer:\n");
    for ( i = 0; i < 5; i++)

          printf("%d ", *(ptr+i)); 
      
       printf("\n");

    return 0;
}
