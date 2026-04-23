#include <iostream>
using namespace std;
class Person{
protected:
    int age;
    string name;
public:
    Person();
    ~Person();
    void get_data(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age:" ;
        cin >> age;
    }
    void show_data(){
        cout << "Name: " << name;
        cout << "Age:" << age;
    }
};
class Student: public Person{
private:
    float fee;
    int roll_number;
public:
    void set_Student_data(int r)
    {
        get_data();
        roll_number = r;
    }
    void calculatet_fee(float f){
        fee = f;
        fee = fee+1000;
    }
    void show_student_data(){
        show_data();
        cout << roll_number;
        cout << fee;
    }
};
int main(){
    Student s;
    s.set_Student_data(1);
    s.calculatet_fee(1200);
    s.show_student_data();
    return;
}