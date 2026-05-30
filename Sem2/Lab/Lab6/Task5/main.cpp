#include <iostream>
#include <iomanip>
#include "employ.h"
using namespace std;

int main(){
    cout << fixed << setprecision(2);
    Employee e1, e2;
    e1.inputData();
    e1.displayDetails();
    e2.inputData();
    e2.displayDetails();
}