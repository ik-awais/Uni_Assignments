#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    int employee_ID;
    float base_salary;
    void inputData();
    float calculateBonus();
    void displayDetails();
};