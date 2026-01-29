// sum of n number using factorial number

#include <stdio.h>

int sumofn(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sumofn(n - 1);
}

int main()
{
    int n;
    printf(" Enter Fav Number :-");
    scanf("%d", &n);

    int result = sumofn(n);
    printf(" Total sum of n number is = %d", result);
    return 0;
}