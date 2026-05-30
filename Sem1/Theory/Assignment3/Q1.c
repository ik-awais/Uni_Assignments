#include <stdio.h>
int main()
{
    //Just for reference, I've printed the forward sequence as well.

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int count = 0, temp = num;
    printf("%d ", temp);

    while (num > 1) { 
        if (num % 2 == 0) {
            num =  num/2;
            printf("%d ", num);
            count ++;
            if (num % 2 != 0 && num != 1) {
                num = (num * 3) + 1;
                printf("%d ", num);
                count ++;
            }
        }
        
        else {
            num = (num * 3) + 1;
            printf("%d ", num);
            count ++;
            if (num % 2 == 0 && num != 1){
                num /= 2;
                printf("%d ", num);
                count ++;
            }
        }
        if (num == 1) {
            break;
        }
    }
    //I couldn't include the num taken in the count during process,
    //so I incremented count for a smooth reverse sequence.
    count++;
    printf("\n");

    //Actual output

    while(count > 0)
    {
        num = temp;
        int count2 = 0;

        //Needed to add 1 in count2, unless it gives logical error
        
        while(num > 0 && count > count2 + 1)
        {
            if(num % 2 == 0)
            {
                num = num/2;
            }
            else
            {
                num = (num * 3) + 1;
            }
            count2++;
        }
        count--;
        printf("%d ",num);
    }
    printf("\n");
    return 0;
}