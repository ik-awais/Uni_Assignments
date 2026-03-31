#include <iostream>
#include <iomanip>
using namespace std;

class Employee{
    string name, ID;
    float salary;
public:
    Employee();
    Employee(string, string, float);
    Employee(Employee&);
    float Bonus();
    void Display();
};