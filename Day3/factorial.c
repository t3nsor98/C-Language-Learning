#include <stdio.h>
// factorial of a number
int main()
{
    printf("Give the number for factorial:-");
    int num;
    int factorial = 1;
    scanf("%d", &num);
    if (num < 0)
    {
        printf("-ve number cant be factorized!!! \n");
    }
    else if (num == 0 && num == 1)
    {
        printf("%d", factorial);
    }
    else
    {
        for (int x = num; x > 1; x--)
        {
            factorial *= x;
        }
        printf("%d", factorial);
    }
    return 0;
}