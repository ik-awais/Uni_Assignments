#include <iostream>
#include <iomanip>
using namespace std;
class Student{
    string name, rollNo;
    int marks;
public:
    Student();
    Student(string n, string rN, int m);
    void Display();
};
Student::Student(){
    name = "X";
    rollNo = "0000";
    marks = 0;
}
Student::Student(string n, string rN, int m){
    name = n;
    rollNo = rN;
    marks = m;
}
void Student::Display(){
    cout << "Name: " << name << "\n" << "Roll No: " << rollNo << "\n" << "Marks: " << marks << endl;
}
int main(){
    Student s1;
    cout << "\nData of Student 1" << endl;
    s1.Display();
    Student s2("Awais", "25P-0011", 90);
    cout << "\nData of Student 2" << endl;
    s2.Display();
    return 0;
}