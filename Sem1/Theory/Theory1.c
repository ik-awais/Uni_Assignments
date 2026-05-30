#include <stdio.h>
#include <time.h>
//Using Constants for storing prices of Groceries
#define RICE 300
#define SUGAR 200
#define POTATOES 150
#define APPLES 400

int main(){

//Welcome Screen

    printf("\n\t\t\t\t-------------------------------------------");
    printf("\n\t\t\t\t  WELCOME TO SMART UTILITY & SHOPPING HUB");
    printf("\n\t\t\t\t-------------------------------------------");

/*Used the code from task description for
"Display Current Data & Time" */

    time_t tm;
    time(&tm);

    printf("\n\n\t\t\t\t\t%s", ctime(&tm));
/*Varibles initialization
Run-time input for user groceries amount*/
    int rice, sugar, potatoes, apples;
    int bill_rice, bill_sugar, bill_potatoes, bill_apples,  subtotal = 0;

    printf("\n\t\t\t\tEnter the amount of Rice(300/kg) you want in kg: ");
    scanf("%d", &rice);
    
    printf("\n\t\t\t\tEnter the amount of Sugar(200/kg) you want in kg: ");
    scanf("%d", &sugar);
    
    printf("\n\t\t\t\tEnter the amount of Potatoes(150/kg) you want in kg: ");
    scanf("%d", &potatoes);
    
    printf("\n\t\t\t\tEnter the amount of Apples(400/kg) you want in kg: ");
    scanf("%d", &apples);

    //Bill Calculation
    bill_rice = RICE * rice;
    bill_sugar = SUGAR * sugar;
    bill_potatoes = POTATOES * potatoes;
    bill_apples = APPLES * apples;
    subtotal = bill_rice + bill_sugar + bill_potatoes + bill_apples;
/*Final Summary of Groceries
Receipt Dispaly*/
    printf("\n\t\t\t\t\t\t ---------------");
    printf("\n\t\t\t\t\t\t Grocery Section");
    printf("\n\t\t\t\t\t\t ---------------");

    printf("\n\n\t\t\t\tRice (%dkg @ RS 300) = RS %d",rice, bill_rice);
    printf("\n\t\t\t\tSugar (%dkg @ RS 200) = RS %d",sugar, bill_sugar);
    printf("\n\t\t\t\tPotatoes (%dkg @ RS 150) = RS %d",potatoes, bill_potatoes);
    printf("\n\t\t\t\tApples (%dkg @ RS 400) = RS %d",apples, bill_apples);
    printf("\n\t\t\t\tGrocery Subtotal  = RS %d",subtotal );
//Notes Calculation
    int return_balance = 50000 - subtotal;
    int N5000, N1000, N500, N100, N50, N20, N10, N5, N1;

    printf("\n\t\t\t\t-------------------------------------------");
    printf("\n\n\t\t\t\tGrand Total = RS %d",subtotal);
    printf("\n\n\t\t\t\tAmount paid = RS 50,000");
    printf("\n\n\t\t\t\tReturn Balance = RS %d",return_balance);
    printf("\n\n\t\t\t\tNotes:\n");
    
    N5000 = return_balance / 5000;
    return_balance = return_balance % 5000;

    N1000 = return_balance / 1000;
    return_balance = return_balance % 1000;

    N500 = return_balance / 500;
    return_balance = return_balance % 500;

    N100 = return_balance / 100;
    return_balance = return_balance % 100;

    N50 = return_balance / 50;
    return_balance = return_balance % 50;

    N20 = return_balance / 20;
    return_balance = return_balance % 20;

    N10 = return_balance / 10;
    return_balance = return_balance % 10;

    N5 = return_balance / 5;
    return_balance = return_balance % 5;

    N1 = return_balance / 1;
    return_balance = return_balance % 1;
    
    
    printf("\n\t\t\t\tRS 5000: %d", N5000);
    printf("\n\n\t\t\t\tRS 1000: %d", N1000);
    printf("\n\n\t\t\t\tRS 500: %d", N500);
    printf("\n\n\t\t\t\tRS 100: %d", N100);
    printf("\n\n\t\t\t\tRS 50: %d", N50);
    printf("\n\n\t\t\t\tRS 20: %d", N20);
    printf("\n\n\t\t\t\tRS 10: %d", N10);
    printf("\n\n\t\t\t\tRS 5: %d", N5);
    printf("\n\n\t\t\t\tRS 1: %d", N1);
    printf("\n\n\t\t\t\t-------------------------------------------\n");
    printf("\n\t\t\t\t\tTHANK YOU FOR CHOOSING SMART HUB\n");
    

return 0;

}