#include <stdio.h>

void myFunction(int a, int b, int c, int *sum, int *multi)
{
    *sum = a + b + c;
    *multi = a * b * c;
}

int main()
{

    int a, b, c, sum, multi;
    a = 10, b = 20, c = 30;
    myFunction(a, b, c, &sum, &multi);

    printf("%d , %d", sum, multi);

    return 0;
}
