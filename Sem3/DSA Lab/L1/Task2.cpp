#include <iostream>
#include <string>
using namespace std;

int main(){
  string rollNo;
  cout << "Enter Roll no: ";
  cin >> rollNo;
  int len = rollNo.length();
  if(len == 8)cout << len << " is the length of Roll No. hence Validated!\n";
  else cout << len << " is the length of Roll No. hence Length is Invalid!\n";
  int Hindex = rollNo.find('-');
  if(Hindex==3) cout << "Valid Hyphen index.\n";
  else cout << "Invalid Hyphen Index!\n";
  string before_hyphen = rollNo.substr(0, Hindex);
  string after_hyphen = rollNo.substr(Hindex+1, len-1);
  cout << "Expected string before Hyphen: " << before_hyphen << endl
  << "Expected string after Hyphen: " << after_hyphen << endl;
  
  string email;
  cout << "Enter NU email: ";
  cin >> email;
  int eIdent = email.find('@');
  if(eIdent > 0) cout << "Valid email\n";
  else cout << "Missing @ symbol, Invalid email!\n";
  int domain = email.find("nu.edu.pk");
  if(domain > 0) cout << "Valid Domain!\n";
  else cout << "Invalid Domain!\n";
  string ErollNo = email.substr(0, eIdent);
  cout << "Roll No extracted from email: " << ErollNo << endl;
  string rollNo2;
  cout << "Input another roll no: ";
  cin >> rollNo2;
  int comp = rollNo.compare(rollNo2);
  if(!comp) cout << "Match!\n";
  else cout << "Not Match!\n";
  string count = before_hyphen.substr(0, Hindex-1) + after_hyphen;
  cout << "Digit count in roll no: " << count.length() << endl;  
  if(count.length() == 6) cout << "Exactly 6 digits are present!\n"; 
}
