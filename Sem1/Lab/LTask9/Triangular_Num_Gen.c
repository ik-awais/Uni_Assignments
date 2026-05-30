#include <stdio.h>
int main()
{
    int num, i, sum;
    for (num = 11; num <= 15; num++)
    {
        sum = 0;
        for (i = 1; i <= num ; i++)
        {
            printf("%d+", i);
            sum+=i;
        }
        printf("\b=%d", sum);
        printf("\n");
    }

    return 0;
}