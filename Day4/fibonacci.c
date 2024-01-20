#include <stdio.h>

int fibonacci(int n);

int main()
{
    int num = fibonacci(10);
    printf("%d", num);
    return 0;
}

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        int fib1 = fibonacci(n - 1);
        int fib2 = fibonacci(n - 2);

        return fib1 + fib2;
    }
}