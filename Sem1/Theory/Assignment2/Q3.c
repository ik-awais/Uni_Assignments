#include <stdio.h>
int main() 
{
    int consume_type, units, bill;
    printf(" \v 1) Domestic\t2) Commercial\t3) Industrial\nSelect Consumer Type(1, 2, 3):");
    scanf(" %d", &consume_type);
    printf("Enter no. of units consumed: ");
    scanf(" %d", &units);

    switch (consume_type)
    {
    case 1:
        printf("Domestic Type");
        break;
    case 2:
        printf("Commercial Type");
        break;
    case 3:
        printf("Industrial Type");
        break;
    default:
        printf("Invalid input\n");
        break;
    }

    if(consume_type == 1) {
        if (units <= 100) {
            bill = units * 5;
            printf("\nBill: RS %d\n", bill);
        } 
        else if (units > 100 && 200 >= units){
            int units2 = units - 100;
            bill = (units2 * 7) + (100 * 5);
            printf("\nBill: RS %d\n", bill);
        }
        else if (units > 200 && 300 >= units) {
            int units2 = units - 200;
            bill = (units2 * 7) + (100 * 7) + 500 ;
            printf("\nBill: RS %d\n", bill);
        }
        else {
            bill = units * 10;
            printf("\nBill: RS %d\n", bill);
        }
    }

    if(consume_type == 2) {
        if (units <= 200) {
            bill = units * 8;
            printf("\nBill: RS %d\n", bill);
        } 
        else if (units > 200 && 400 >= units){
            int units2 = units - 200;
            bill = (units2 * 12) + (200 * 8);
            printf("\nBill: RS %d\n", bill);
        }
        else if (units > 400 && 500 >= units) {
            int units2 = units - 300;
            bill = (units2 * 12) + (100 * 12) +(200 * 8);
            printf("\nBill: RS %d\n", bill);
        }
        else {
            bill = units * 15;
            printf("\nBill: RS %d\n", bill);
        }
    }

    if(consume_type == 3) {
        if (units <= 500) {
            bill = units * 15;
            printf("Bill: RS %d\n", bill);
        } 
        else if (units > 500 && units < 1000){
            int units2 = units - 500;
            bill = (units2 * 20) + (500* 15);
            printf("Bill: RS %d\n", bill);
        }
        else {
            bill = units * 20;
            printf("Bill = RS %d", bill);
            int surcharge = bill * 0.1;
            bill += surcharge;
            printf("+ surcharge: RS %d\n", bill);
        }
    }

}
