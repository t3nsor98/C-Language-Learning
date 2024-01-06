#include <stdio.h>

int main()
{
    for (int x = 3; x < 10; x++)
    {
        if (x == 5)
        {
            continue;
        }
        if (x == 7)
        {
            break;
        }
        printf("%d \n", x);
    }
    return 0;
}
