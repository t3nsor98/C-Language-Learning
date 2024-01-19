#include <stdio.h>

int sum(int num);

int main()
{
    int yo = sum(5);
    printf("%d", yo);
    return 0;
}

int sum(int num)
{

    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num + sum(num - 1);
    }
}