#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate length of string
    while (str[length] != '\0')
    {
        length++;
    }

    printf("Length of the string is: %d\n", length);

    return 0;
}
