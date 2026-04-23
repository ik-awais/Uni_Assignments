#include <iostream>
using namespace std;
class Person{
protected:
    int age;
    string name;
public:
    Person(char n, int a){
        cout << "I am in base class" << endl;
        name = n;
        age = a;
    }
    void get_data(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age:" ;
        cin >> age;
    }
    void show_data(){
        cout << "Name: " << name << endl;
        cout << "Age:" << age << endl;
    }
};
class Student: public Person{
private:
    float fee;
    int roll_number;
public:
    Student(float f, int r, int a, char n):  Person(a, n){
    }
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
        cout << roll_number << endl;
        cout << fee << endl;
    }
};
int main(){
    Student s(24000.90, 1, 25, 'A');
    s.show_student_data();
    return 0;
}