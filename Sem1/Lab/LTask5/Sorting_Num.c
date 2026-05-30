#include <stdio.h>
int main()
{
    int a = 34;
    int b = 54;
    int c = 23;

    printf("\nEnter first integer number:");
    scanf(" %d", &a);
    printf("\nEnter second integer number:");
    scanf(" %d", &b);
    printf("\nEnter third integer number:");
    scanf(" %d", &c);

    if (a < b && a < c) {

        if (b < c) {
            printf("\nThe ascending order would be: %d < %d < %d\n", a, b, c);
        }
        else {
            printf("\nThe ascending order would be: %d < %d < %d\n", a, b, c);
        }

    }

    if (b < a && b < c) {

        if (a < c) {
            printf("\nThe ascending order would be: %d < %d < %d\n", b, a, c);
        }
        else {
            printf("\nThe ascending order would be: %d < %d < %d\n", b, c, a);
        }

    }

    if (c < b && c < a) {

        if (b < a) {
            printf("\nThe ascending order would be: %d < %d < %d\n", c, b, a);
        }
        else {
            printf("\nThe ascending order would be: %d < %d < %d\n", c, a, b);
        }

    }

}
