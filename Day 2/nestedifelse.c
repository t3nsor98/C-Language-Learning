#include<stdio.h>

int main(){
    printf("Enter your number: \n");
    int num;
    scanf("%d", &num);
    if (num > 0){
        printf("Your number is greater than zero. \n");
        if(num % 2 == 0) {
            printf("Your number is even. \n");
        }else{
            printf("Your number is odd \n");
        }
    }else {
        printf("Given number is a negative number. \n");
    }
    return 0;

}