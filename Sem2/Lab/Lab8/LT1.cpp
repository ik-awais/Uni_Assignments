#include <iostream>
#include <iomanip>
using namespace std;
class BankAccount{
    static double totalBalance;
    double deposit;
public:
    // Constuctor & Destructor
    BankAccount(double deposit);
    ~BankAccount();
    // Static Function to show total balance
    static void showTotalBalance();
};
double BankAccount::totalBalance = 0;
BankAccount::BankAccount(double deposit){
    BankAccount::totalBalance += deposit;
}
BankAccount::~BankAccount(){
    BankAccount::showTotalBalance();
    cout << "\nAccount Closed\n";
}
void BankAccount::showTotalBalance(){
    cout << "\nTotal Balance: " << BankAccount::totalBalance << endl;
}
int main(){
    cout << fixed << setprecision(2);
    BankAccount acc1(500000.87);
    return 0;
}