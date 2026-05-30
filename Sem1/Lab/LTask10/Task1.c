#include <stdio.h>

int main()
{
    int num = 1, x = 0, Arr[5];

    while (x < 5) {

        printf("Enter %d num: ", num);
        scanf("%d", &Arr[x]);
        num++;
        x++;
    }
    printf("\n");

    for (x = 4; x >= 0; x--){
        printf("%d ", Arr[x]);
        if (x == 0) {
            break;
        }
    }
    printf("\n");

    //1.2

    int y = 0;
    for (x = 4; x >= 0; x--) {
        Arr[x] = Arr[y];
        printf("%d ", Arr[y]);
        y++;
    }
    printf("\n");
        
    return 0;
}