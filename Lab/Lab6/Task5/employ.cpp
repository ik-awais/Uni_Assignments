#include <iostream>
#include <iomanip>
#include "employ.h"
using namespace std;

void Employee::inputData(){
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter Employee ID: ";
    cin >> employee_ID;
    cout << "Enter base salary: ";
    cin >> base_salary;
}
float Employee::calculateBonus(){
    cout << fixed << setprecision(2);
    return (base_salary*10)/100;
}
void Employee::displayDetails(){
    cout << "Name: " << name << endl;
    cout << "Employee ID: " << employee_ID << endl;
    cout << "Salary: " << base_salary << endl;
    float bonus = calculateBonus();
    cout << "Final Salary: " << base_salary + bonus << endl;
}