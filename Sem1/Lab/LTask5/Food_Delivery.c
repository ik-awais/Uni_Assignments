#include <stdio.h>
int main()
{
    float value, discount, delivery_fee, total;
    char Sunday;

    printf("\nEnter the value of your order:");
    scanf("%f", &value);
    printf("\nEnter if it is Sunday deal:Y/N ");
    scanf(" %c", &Sunday);
    if (Sunday == 'Y') {
        Sunday = 1;
    }
    else {
        Sunday = 0;
    }

    if (value >= 3000 && Sunday == 1) {
        printf("\nOrder Value: %.1f\n", value);

        discount = value * 20/100;

        printf("Discount: %.1f\n", discount);  
        printf("Woohoo! Free Delivery.\n");

        total = value - discount;

        printf("Total: %.1f\n", total);

        }

    if (value >= 3000 && Sunday == 0) {
        printf("\nOrder Value: %.1f\n", value);

        discount = value * 10/100;

        printf("Discount: %.1f\n", discount);  
        printf("Woohoo! Free Delivery.\n");

        total = value - discount;

        printf("Total: %.1f\n", total);

    }

    if (value >= 1500 && value < 3000) {

        delivery_fee = 100;
        printf("\nOrder Value: %.1f\n", value);

        printf("Discount: None\n");  
        printf("Delivery Fee: %.1f\n", delivery_fee);

        total = value + delivery_fee;

        printf("Total: %.1f\n", total);

    }

    if (value >= 1000 && value < 1500) {

        delivery_fee = 200;
        printf("\nOrder Value: %.1f\n", value);

        printf("Discount: None\n");  
        printf("Delivery Fee: %.1f\n", delivery_fee);

        total = value + delivery_fee;

        printf("Total: %.1f\n", total);
    }

    if (value < 1000) {

        delivery_fee = 300;
        printf("\nOrder Value: %.1f\n", value);

        printf("Discount: None\n");  
        printf("Delivery Fee: %.1f\n", delivery_fee);

        total = value + delivery_fee;

        printf("Total: %.1f\n", total);
    }
}
