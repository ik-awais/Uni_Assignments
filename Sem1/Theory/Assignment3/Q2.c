#include <stdio.h>
int main() 
{
    int balance = 5000;
    int option, deposit, withdraw, transfer, count = 0;
    char choice,history, temp;

    do
    {
        count++;
        
        printf("\n\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Transfer Money\n");
        printf("5. View Money History\n");
        printf("6. Exit\n");
        printf("Select one of the options above: ");
        scanf("%d", &option);

            if (option == 1) {
                history = '1';
                temp = history;
                
                printf("Enter Deposit Amount: ");
                scanf("%d", &deposit);
                if (deposit > 10000) {
                    printf("Deposit amount should be less than $10000\n");
                }
                else {
                    balance += deposit;
                    printf("$%d depositd successfully\n", deposit);
                }
                printf("Do you want to perform another operation?");
                scanf(" %c", &choice);
                if (choice == 'Y' || choice == 'y'){
                    continue;
                }            
                else {
                    break;
                }
            }

            else if (option == 2) {
                history = '2';
                temp = history;

                printf("Withdraw Money: ");
                scanf("%d", &withdraw);
                if (withdraw > balance) {
                    printf("Insufficient balance\nDeducting $50");
                    balance -= 50;
                }
                else {
                    balance -= withdraw;
                    printf("$%d Withdrawn successfully\nCurrent Balance: %d\n", withdraw, balance);
                }
                printf("Do you want to perform another operation?");
                scanf(" %c", &choice);
                if (choice == 'Y' || choice == 'y'){
                    continue;
                }            
                else {
                    break;
                }
            }

            else if (option == 3) {
                history = '3';
                temp = history;

                printf("Current Balance: $%d\n", balance);
                printf("Do you want to perform another operation?");
                scanf(" %c", &choice);
                if (choice == 'Y' || choice == 'y'){
                    continue;
                }            
                else {
                    break;
                }
            }

            else if (option == 4) {
                history = '4';
                temp = history;

                printf("Transfer Money: ");
                scanf("%d", &transfer);
                if (transfer > balance) {
                    printf("Insufficient balance\n");
                }
                else {
                    balance -= transfer;
                    printf("$%d Transfered Successfully\nCurrent Balance: %d\n", transfer, balance);
                    balance = (float)balance - (float)(transfer * 0.02);
                }
                printf("Do you want to perform another operation?");
                scanf(" %c", &choice);
                if (choice == 'Y' || choice == 'y'){
                    continue;
                }            
                else {
                    break;
                }
            }

            else if (option == 5) {
                printf("Your transaction history: ");
                //Tried, but couldn't come up with an apt logic.
                //Didn't use GPT, would try to have better a practice in next assignment/logic.
                printf("Current balance: %d\n", balance);
                printf("Last char: %c %c\n", history, temp);

                printf("Do you want to perform another operation?");
                scanf(" %c", &choice);
                if (choice == 'Y' || choice == 'y'){
                    continue;
                }            
                else {
                    break;
                }
            }

        else {
            printf("Choose a valid option\n");
            break;
        }        

        if (option == 6) {
            printf("Do you want to exit the program?");
            scanf(" %c", &choice);
            if (choice == 'Y' || choice == 'y'){
                break;
            }
        }
    } while (1);

    printf("\n");
    
    return 0;
}