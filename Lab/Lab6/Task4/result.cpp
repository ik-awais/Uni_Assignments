#include <iostream>
#include <iomanip>
#include "result.h"
using namespace std;

void Result::inputData(){
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll no: ";
    cin >> roll_no;
    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        if(marks[i] < 0 || marks[i] > 100)
        {
            cout << "Invalid marks. Enter marks again!\n";
            i--;
        }
    }
}
float Result::calculateAverage(){
    int average = 0; 
    for (int i = 0; i < 5; i++)
    {
        average += marks[i];
    }
    //Assuming that (pass 50) means that student
    //with average marks of 50 or above are pass
    if(average/5 < 50)
    {
        cout << "Fail.\n";
    }
    else
    {
        cout << "Pass\n";
    }
    return average/5;
}
void Result::displayResult(){
    cout << name << endl << roll_no << endl;
    cout << "Marks of 5 subjects: ";
    for(int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;
}
