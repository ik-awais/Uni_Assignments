#include <iostream>
using namespace std;

int add(int a, int b){return a + b;}

int subtract(int a, int b){return a - b;}

int multiply(int a, int b){return a * b;}

int divide(int a, int b){return a / b;}

int compute(int (*operate)(int, int), int x, int y){return operate(x, y);}

int main(){
  int (*calculator[4])(int, int) = {add, subtract, multiply, divide};
  cout << "\n=== Calculator ===\n";
  cout << "1. Add\n";
  cout << "2. Subtract\n";
  cout << "3. Multiply\n";
  cout << "4. Divide\n";
  int choice, x, y;
  cout << "Enter your choice: ";
  cin >> choice;
  cout << "Enter first int: ";
  cin >> x;
  cout << "Enter second int: ";
  cin >> y;
  int (*operation)(int, int) = calculator[choice-1];
  int result = operation(x, y);
  cout << "Result: " << result << endl;
  cout << "\n=== Direct Callback Tests ===\n";
  cout << "compute(add, 1, 2) = " << compute(add, 1, 2) << endl;
  cout << "compute(subtract, 14, 10) = " << compute(subtract, 14, 10) << endl;
  cout << "compute(multiply, 2, 3) = " << compute(multiply, 2, 3) << endl;
  cout << "compute(divide, 6, 3) = " << compute(divide, 6, 3) << endl;
  return 0;
}
