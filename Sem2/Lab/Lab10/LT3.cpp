#include <iostream>
#include <string.h>
using namespace std;
class Student{
    char* name;
    int rollNo;
public:
    Student();
    Student(const Student& copy);
    ~Student();
    void setData(const char* name, int);
    void showData();
};
Student::Student(){
    name = nullptr;
    rollNo = 0;
}
Student::Student(const Student& copy){
    name = new char[strlen(copy.name)+1];
    strcpy(name, copy.name);
    rollNo = copy.rollNo;
}
Student::~Student(){
    delete[] name;
}
void Student::setData(const char* name, int rollNo){
    delete[] this->name;
    this->name = new char[strlen(name)+1];
    strcpy(this->name, name);
    this->rollNo = rollNo;
}
void Student::showData(){
    cout << "Name: " << name << "\tRollno: " << rollNo << endl;
}
int main(){
    Student obj_1;
    obj_1.setData("Usman", 101);
    Student obj_2(obj_1);
    cout << "===Before Modification===\n";
    obj_1.showData(); obj_2.showData();
    obj_2.setData("Awais", 102);
    cout << "===After Modification===\n";
    obj_1.showData(); obj_2.showData();
    return 0;
}