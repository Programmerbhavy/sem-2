// wap to febonacci series

#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n, i;

    printf("Enter the number of terms in fibonacci series :-");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Plz enter a number");
    }
    else
    {

        printf("Fibonacci series up to %d terms :-", n);
    }

    for (int i = 0; i < n; i++)

        printf("%d ", fibonacci(i));

    return 0;
}