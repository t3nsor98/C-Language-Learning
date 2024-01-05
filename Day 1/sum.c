# include<stdio.h>
int main(){
    printf("Enter your firsst number: \n");
    int num1;
    scanf("%d", &num1);
    printf("Enter your second number: \n");
    int num2;
    scanf("%d", &num2);
    int sum = num1 + num2;
    printf("Your sum of two number is: %d", sum);
}