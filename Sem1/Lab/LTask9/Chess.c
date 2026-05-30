#include <stdio.h>
int main()
{
    int black, white;
    for (black = 1; black <= 8; black++){
        for (white = 1; white <= 4; white++){
            if (black % 2 == 0)
                printf("⬛⬜");
            else {
                printf("⬜⬛");
            }
        }
        printf("\n");
    }

}