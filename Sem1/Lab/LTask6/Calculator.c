#include <stdio.h>
int main() 
{
    float num1, num2, result;
    char add, sub, mult, divd, modl, operation, ask_;
    add = '+', sub = '-', mult = '*', divd = '/', modl = '%';

    do
    {
        printf("Enter first number:");
        scanf(" %f", &num1);
        printf("Operation to be performed (+, -, *, /, %%):");
        scanf(" %c", &operation);
        printf("Enter second number:");
        scanf(" %f", &num2);

        if (operation == add) {
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result); 
        }
        else if (operation == sub) {
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result); 
        }
        else if (operation == mult) {
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result); 
        }
        else if (operation == divd) {
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result); 
        }
        else if(operation == modl) {
            int intnum1 = (int)num1;
            int intnum2 = (int)num2;
            int intresult = (int)result;
            intresult = intnum1 % intnum2;
            printf("%d %% %d = %d\n", intnum1, intnum2, intresult); 
        }

        printf("Do you want to continue using calculator(Y/N)?");
        scanf(" %c", &ask_);

    } while (ask_ == 'Y' || ask_ == 'y');

    return 0;
}
