#include <iostream>
#include <iomanip>
#include "student.h"
using namespace std;

void Student::studentInput(){
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter roll no: ";
    cin >> roll_no;
    cout << "Enter marks: ";
    cin >> marks;
}