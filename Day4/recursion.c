#include <stdio.h>

void rec(int num)
{
    if (num > 0)
    {
        printf("Hello World!! %d \n", num);
        rec(num - 1);
    }
    else
    {
        // Do nothing
    }
}

int main()
{
    rec(10);

    return 0;
}
