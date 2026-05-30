#include <stdio.h>
int main() 
{
    int num, thous, hunds, tens, ones, prime;
    printf("Enter 4 digit number: ");
    scanf("%d", &num);

    if (num < 1000) {
        printf("Invalid number.");

    }

    thous = num / 1000;
    hunds = num % 1000;
    tens = hunds % 100;
    hunds = hunds /100;
    ones = tens % 10;
    tens = tens / 10;
    prime = hunds + tens;

    printf("Thousands: %d\n", thous);
    printf("Hundreds: %d\n", hunds);
    printf("Tens: %d\n", tens);
    printf("Ones: %d\n", ones);
    printf("Prime: %d\n", prime);    

    if ((thous == ones && hunds == tens) ) {
        printf("Its a paradigm.\n");
            if (prime == 2 || prime == 3 || prime == 5 || prime == 7 ) {
                printf("Special paradigm spotted.\n");
            }

    }
    else{
        printf("Input number is not a paradigm.\n");
    }
    return 0;
}