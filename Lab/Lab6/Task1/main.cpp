#include <iostream>
#include <iomanip>
#include "student.h"
using namespace std;

int main(){
    Student s1;
    s1.studentInput();
    cout << s1.name << endl << s1.roll_no << endl << s1.marks << endl;

    return 0;
}