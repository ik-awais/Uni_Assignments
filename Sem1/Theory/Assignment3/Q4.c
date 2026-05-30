#include <stdio.h>
int main()
{
    int start, end, mult, sum, T_sum = 0, largest = 0, smallest = 10000;
    printf("Start: ");
    scanf("%d", &start);
    printf("End: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        //External Loop for the start and end point.
        sum = 0;
        for (int j = 1; j <= 10; j++) {
            //Internal loop for running individual tables.
            mult = j * i;
            if (mult % start == 0 && mult % end == 0) {
                //Skip condition
                printf("Skip ");
                continue;
            }
            if (largest < mult) {
                largest = mult;
            }
            if (smallest > mult) {
                smallest = mult;
            }
            //Individual tables sum
            sum += mult;
            printf("%d ", mult);
        }
        printf("SUM: %d", sum);
        //Total Sum calculation
        T_sum += sum;
        printf("\n");
    }
    if (T_sum > 10000) {
        printf("\nOverflow Detected.\n");
    }
    else {
    printf("\nTOTAL SUM: %d\n", T_sum);
    printf("Smallest Product: %d\n", smallest);
    printf("Largest Product: %d\n", largest);
    }

    return 0;
}

//I didn't have the logic of prime numbers, unless I had done
//hard-coding for some specific prime numbers which isn't applicable in this case.