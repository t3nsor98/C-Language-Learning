#include <stdio.h>

int main()
{
    int age = 25;
    int *ptr = &age;
    int new_age = *ptr;

    printf("%d \n", new_age);
    printf("%p \n", &age);
    printf("%p \n", ptr);
    
    return 0;
}