#include <stdio.h>
int main()
{

    int i, passengers, revenue;
    i = 1, passengers = 1, revenue = 0;
    
    while (passengers <= 15){
        //printf("\t\t\t\t\tPedestrian no. %d\n", i);
        if (i%4 == 0){
            printf("\t\t\t\t  |------------------------|\n");
            printf("\t\t\t\t  |      Passenger # %0.2d    |\n", passengers);
            printf("\t\t\t\t  |      Seat no. %0.2d       |\n", passengers);
            printf("\t\t\t\t  |      Revenue: %0.3d      |\n", 60*passengers);
            printf("\t\t\t\t  |------------------------|\n"); 
            if (passengers == 15){
                break;
            }           
            passengers++;
            
        }
        i++;
    }
    revenue = 60 * passengers;
    printf("\t\t\t\t\tTotal revenue: %d\n", revenue);
    printf("\t\t\t\tBus is full. All seats are reserved.\n");
    printf("\t\t\t\t------------------------------------\n");          

}
