#include <stdio.h>
int main(){
    printf("Enter the number for the multiplication table: \n");
    int num;
    scanf("%d", &num);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;
}