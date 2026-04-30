#include <iostream>
class Person{
protected:
    std::string name;
    int age;
public:
    void setData(std::string, int);
    virtual void showData() const = 0;
};
void Person::setData(std::string name, int age){
    this->name = name;
    this->age = age;
}
void Person::showData() const {
    std::cout << "Name: " << name << "\nAge: " << age << "\n"; 
}
class Student: public Person{
protected:
    std::string ID, course;
public:
    void setStudentData(std::string, std::string);
    void showData();
};
void Student::setStudentData(std::string ID, std::string course){
    this->ID = ID;
    this->course = course;
}
void Student::showData(){
    showData();
    std::cout << "Student ID: " << ID << "\nCourse: " << course << "\n";   
}
class Assistant: public Person, public Student{
private:
    double salary;
public:
    void setAssistantData(double);
    void showAssistantData();
};
void Assistant::setAssistantData(double salary){
    this->salary = salary;
}
void Assistant::showAssistantData(){
    Student::showData();
    std::cout << "Salary: " << salary << "\n";
}
int main(){   
    return 0;
}