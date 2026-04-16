#include "LT3.h"
int Employee::count = 0;
Employee::Employee(string name, string ID, double salary){
    if(Employee::count < 10)
    {
        Employee::count++;
        track = true;
    }
    else
    {
        cout << "No more Employees can be added\n";
        cout << name << ": " << ID << " couldn't be added\n";
        track = false;
        return;
    }
    this->name = name;
    this->ID = ID;
    this->salary = salary;
}
Employee::~Employee(){
    if(track = true)
        Employee::count--;
}
void Employee::display(){
    cout << name << ": " << ID << "\nSalary: " << salary << endl;
}