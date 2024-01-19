#include <stdio.h>

float gstPrice(int pr);

int main()
{
    printf("Enter Price of the product:- \n");
    int price;
    scanf("%d", &price);
    float finalPrice = gstPrice(price);
    printf("The final price of product is: %f", finalPrice);



    return 0;
}

float gstPrice(int pr) {
    return pr + (pr*0.18);

}