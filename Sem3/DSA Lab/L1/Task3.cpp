#include <iostream>
using namespace std;

void bugTransferFee(double from, double to, double fee){
  to += fee;
  from -= fee;
  cout << "\nAmount Transferred via buggy function\n" << endl;
}
/*bugTransferFee din't work because it made changes
to the variables with scope only to the void function
instead of the actual variables in main fucntion
This problem is faced when argument is passed by value
instead of pass of reference*/
void transferFee(double &from, double &to, double &fee){
  to += fee;
  from -= fee;
  cout << "\nAmount Transferred via reference function\n" << endl;
}

void pointerTransferFee(double *from, double *to, double *fee){
  *to += *fee;
  *from -= *fee;
  cout << "\nAmount Transferred via Pointer function\n" << endl;
}

void swapBalances(double *a, double *b){
  *a += *b;
  *b = *a-(*b);
  *a -= *b;
  cout << "\nAmount swampped via Swap Balance function\n" << endl;
}

int main(){
  double Fee, feeFrom, feeTo;
  cout << "Enter Account 1 amount: ";
  cin >> feeFrom;
  cout << "Enter fee to be transferred: ";
  cin >> Fee;
  cout << "Enter the Account 2 current amount to transfer fee to: ";
  cin >> feeTo;
  cout << "***Original Balances*** \n" << "Account 1: " << feeFrom << endl
  << "Account 2: " << feeTo << endl;
  bugTransferFee(feeFrom, feeTo, Fee);
  cout << "***After Buggy Function*** \n" << "Account 1: " << feeFrom << endl
  << "Account 2: " << feeTo << endl;
  transferFee(feeFrom, feeTo, Fee);
  cout << "***After Reference Function*** \n" << "Account 1: " << feeFrom << endl
  << "Account 2: " << feeTo << endl;
  pointerTransferFee(&feeFrom, &feeTo, &Fee);
  cout << "***After Reference Function*** \n" << "Account 1: " << feeFrom << endl
  << "Account 2: " << feeTo << endl;
  swapBalances(&feeFrom, &feeTo);
  cout << "***After Swap Balance Function*** \n" << "Account 1: " << feeFrom << endl
  << "Account 2: " << feeTo << endl;
  
}
