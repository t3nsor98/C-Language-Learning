#include <stdio.h>

int recursion(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * recursion(num - 1);
    }
}

int main()
{
    int yo = recursion(12);
    printf("%d", yo);
    return 0;
}
