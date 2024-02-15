#include <stdio.h>

int main() {
    printf("Enter the two number you want to add: ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    printf("The sum of %d and %d is %d", num1, num2, num1 + num2);
}