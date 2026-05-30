#include <stdio.h>
int main()
{
    int height, mid, type, k = 0;
    char symbol, symbol2, choice;
    printf("Height: ");
    scanf(" %d", &height);
    printf("Symbol: ");
    scanf(" %c", &symbol);
    printf("Hollow or Filled(y/n): ");
    scanf(" %c", &choice);
    printf("1. Single \t 2. Overlapped\nChoose (1/2): ");
    scanf(" %d", &type);

    if (symbol == '*')
    {
        symbol2 = '#';
    }
    else {
        symbol2 = '*';        
    }
    

    mid = height / 2;

    //Hollow or Filled Diamond
    if (choice == 'y' || choice == 'Y') {
        //Hollow Diamond U.Half
        printf("\nHollow Diamond\n");
        
        for (int row = 0; row < mid; row++) {
            for (int space = mid - row; space > 0; space--)
            {
                printf(" ");
            }
            printf("%c", symbol);
            for(int dash = 1; dash <= (2 * row); dash++){
                printf(" ");
            }
            if (row != 0){
            printf("%c", symbol);
            }

            printf("\n");
        }
        //Hollow Diamond L.Half
        for (int row = mid; row >= 0; row--) {
            for (int space = 0; space < k; space++){
                printf(" ");
                if (k > mid) {
                    break;
                }
            }
            printf("%c", symbol);
            for(int dash = (2 * row); dash > 0; dash--) {
                printf(" ");
            }
            if (row != 0) {
                printf("%c", symbol);
            }
            k++;
        printf("\n");
        }
        
    }

    else {
        //Filled Diamond U.Half
        printf("\nFilled Diamond\n");

        k = 0;
    
        for (int row = 0; row < mid; row++) {
            for (int space = mid - row; space > 0; space--) {
                printf(" ");
            }
            for (int i = 1; i <= (2 * row) + 1; i++) {
                printf("%c", symbol);
            }
            printf("\n");
        }
        //Filled Diamond L.Half
        for (int row = mid; row >= 0; row--) {
            for (int space = 0; space < k; space++){
                printf(" ");
                if (k > mid) {
                    break;
                }
            }
            for (int i = (2 * row) + 1; i > 0; i --) {
                printf("%c", symbol);
            }
            k++;
        printf("\n");
        }
    }

    k = 0;

    if (type == 2)
    {
        //Overlapped Diamond U.Half
        printf("\nOverlapped Diamond\n");
    
        for (int row = 0; row < mid; row++) {
            for (int space = mid - row; space > 0; space--)
            {
                printf(" ");
            }
            printf("%c", symbol);
            for(int dash = 1; dash <= (2 * row); dash++){
                printf("%c", symbol2);
            }
            if (row != 0){
            printf("%c", symbol);
            }

            printf("\n");
        }
        //Overlapped Diamond L.Half
        for (int row = mid; row >= 0; row--) {
            for (int space = 0; space < k; space++){
                printf(" ");
                if (k > mid) {
                    break;
                }
            }
            printf("%c", symbol);
            for(int dash = (2 * row); dash > 0; dash--) {
                printf("%c", symbol2);
            }
            if (row != 0) {
                printf("%c", symbol);
            }
            k++;
        printf("\n");
        }        
    }

    return 0;
}