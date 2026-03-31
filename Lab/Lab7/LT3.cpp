#include "LT3.h"
Employee::Employee(){
    name = "X";
    ID = "0000";
    salary = 0.0;
}
Employee::Employee(string n, string id, float money){
    name = n;
    ID = id;
    salary = money;
}
float Employee::Bonus(){
    return (salary)/10;
}
void Employee::Display(){
    cout << name << endl << ID << endl << salary << endl << Bonus() <<
     endl << "Final Salary: " << salary+Bonus() << endl;
}
Employee::Employee(Employee& copy){
    name =  copy.name;
    ID =  copy.ID;
    salary =  copy.salary;
}