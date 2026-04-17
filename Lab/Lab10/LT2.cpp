#include <iostream>
#include <string.h>
using namespace std;
class Student{
    char* name;
    int rollNo;
public:
    Student();
    ~Student();
    void setData(const char* name, int);
    void showData();
};
Student::Student(){
    name = new char[10];
    rollNo = 0;
}
Student::~Student(){
    delete[] name;
}
void Student::setData(const char* name, int rollNo){
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
    obj_1.showData(); obj_2.showData();
}