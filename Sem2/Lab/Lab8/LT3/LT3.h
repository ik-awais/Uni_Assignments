#include <iostream>
using namespace std;
class Employee{
    static int count; 
    string name, ID;
    double salary;
    bool track;
public:
    // Constructor & Destructor
    Employee(string, string, double);
    ~Employee();
    static int countPublic(){ return Employee::count; };
    void display();
};