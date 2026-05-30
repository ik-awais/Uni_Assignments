#include <stdio.h>
int main()
{
    char F_Letter, N_Letter;
    int ID, hunds, N_hunds, tens, N_tens, ones, N_ones;

    printf("Name's first letter: ");
    scanf(" %c", &F_Letter);
    printf("Input ID: ");
    scanf("%d", &ID);

    hunds = ID / 100;
    tens = ID % 100 / 10;
    ones = (ID % 100) % 10;

    if (1000 > ID) {

//In order to keep the digits within 0-10 range even after addition of 5 in case of Vowels
//the following logic is applied

        if (F_Letter == 'A' || F_Letter == 'a' || F_Letter == 'E' || F_Letter == 'e' ||
        F_Letter == 'I' || F_Letter == 'i' || F_Letter == 'O' || F_Letter == 'o' || 
        F_Letter == 'U' || F_Letter == 'u') {

            N_hunds = hunds + 5;
            N_tens = tens + 5;
            N_ones = ones + 5;

            if (N_hunds >= 10) {
                N_hunds -= 10;
            }
            if (N_tens >= 10) {
                N_tens -= 10;
            }
            if (N_ones >= 10) {
                N_ones -= 10;                
            }
        }

//For Consonents

        else {
          
            N_hunds = hunds - 2;
            N_tens = tens - 2;
            N_ones = ones - 2;

            if (N_hunds < 0) {
                N_hunds += 10;
            }
            if (N_tens < 0) {
                N_tens += 10;
            }
            if (N_ones < 0) {
                N_ones += 10;
            }
        }
    }
    else {
        printf("Invalid ID.\nID must be a 3 digit number.\n");
    }

//Encoding input Name

    //switch commands go here
    switch (F_Letter)
    {
    case 65:
        N_Letter = 'Z';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 66:
        N_Letter = 'Y';        
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 67:
        N_Letter = 'X';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 68:
        N_Letter = 'W';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;
    
    case 69:
        N_Letter = 'V';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);        
        break;

    case 70:
        N_Letter = 'U';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 71:
        N_Letter = 'T';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 72:
        N_Letter = 'S';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 73:
        N_Letter = 'R';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 74:
        N_Letter = 'Q';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 75:
        N_Letter = 'P';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 76:
        N_Letter = 'O';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;
    
    case 77:
        N_Letter = 'N';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 78:
        N_Letter = 'M';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;


    case 79:
        N_Letter = 'L';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 80:
        N_Letter = 'K';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 81:
        N_Letter = 'J';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 82:
        N_Letter = 'I';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 83:
        N_Letter = 'H';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 84:
        N_Letter = 'G';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 85:
        N_Letter = 'F';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 86:
        N_Letter = 'E';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 87:
        N_Letter = 'D';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 88:
        N_Letter = 'C';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 89:
        N_Letter = 'B';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    case 90:
        N_Letter = 'A';
        printf("Encoded Result: %c%d%d%d\n", N_Letter, N_hunds, N_tens, N_ones);
        break;

    default:
        printf("Invalid Name's First Letter.\n");
        break;
    }

//Decoding Transformed Name

    char Y_N;
    printf("Do you want to decode this text?(Y/N)");
    scanf(" %c", &Y_N);

    if (Y_N == 'Y' || Y_N == 'y') {
        printf("Decrypting Data...");

    //switch commands go here

        switch (N_Letter)
        {
        case 65:
            F_Letter = 'Z';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 66:
            F_Letter = 'Y';        
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 67:
            F_Letter = 'X';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 68:
            F_Letter = 'W';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;
        
        case 69:
            F_Letter = 'V';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);        
            break;

        case 70:
            F_Letter = 'U';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 71:
            F_Letter = 'T';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 72:
            F_Letter = 'S';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 73:
            F_Letter = 'R';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 74:
            F_Letter = 'Q';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 75:
            F_Letter = 'P';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 76:
            F_Letter = 'O';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;
        
        case 77:
            F_Letter = 'N';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 78:
            F_Letter = 'M';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;


        case 79:
            F_Letter = 'L';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 80:
            F_Letter = 'K';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 81:
            F_Letter = 'J';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 82:
            F_Letter = 'I';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 83:
            F_Letter = 'H';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 84:
            F_Letter = 'G';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 85:
            F_Letter = 'F';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 86:
            F_Letter = 'E';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 87:
            F_Letter = 'D';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 88:
            F_Letter = 'C';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 89:
            F_Letter = 'B';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        case 90:
            F_Letter = 'A';
            printf("Decoded Result: %c%d%d%d\n", F_Letter, hunds, tens, ones);
            break;

        default:
            printf("Invalid Name's First Letter.\n");
            break;
        }
    }

    else {
        printf("Program Ended.\n");

    }
    
    return 0;
}