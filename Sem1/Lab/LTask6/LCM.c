#include <stdio.h>
void main()
{
    int num1, num2, mult1, mult2;
    int i = 1;
    int j = 1;
    printf("Enter first number:");
    scanf(" %d", &num1);
    printf("Enter second number:");
    scanf(" %d", &num2);

    while (i< 100 && j < 100) {
        mult1 = num1 * i;
        mult2 = num2 * j;
        if (mult1 == mult2){
            printf("LCM is %d\n", mult1);
            break;
        }
        if (mult2 > mult1) {
            i++;
        }
        else{
            j++;
        }
    }
}
