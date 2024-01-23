#include <stdio.h>

void square(int num)
{
    num = num * num;
    printf("%d", num);
}

int main()
{
    int myNumber = 4;
    square(myNumber);

    printf("\n %d", myNumber);

    return 0;
}