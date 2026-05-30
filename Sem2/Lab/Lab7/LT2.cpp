#include <iostream>
#include <iomanip>
using namespace std;
class Result{
    string student_name;
    string rollNo;
    int marks[5];
public:
    Result();
    Result(string name, string roll, int *mark);
    void Display();
    float Average();
};
Result::Result(){
        student_name = "X";
        rollNo = "0000";
        for(int i = 0; i < 5; i++)
            marks[i] = 0;
    }
Result::Result(string name, string roll, int *mark){
    student_name = name;
    rollNo = roll;
    for(int i = 0; i < 5; i++)
    {
        marks[i] = mark[i];
    }        
}
void Result::Display(){
    cout << "Name: " << student_name << "\n" << "Roll No: " <<  rollNo << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "Marks" << i + 1 << ": "; 
        cout << marks[i] << endl;
    }
    cout << "Average marks: " << Average() << endl;
    (Average()>=50)?cout << "Status: Pass\n" : cout << "Status: Fail\n";
}
float Result::Average(){
    return (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5.0;
}
int main(){
    Result s1;
    cout << "\nResult of Student 1" << endl;
    s1.Display();
    int mark[5];
    cout << "\nEnter marks of 5 subjects: ";
    for(int i = 0; i < 5; i++)
        cin >> mark[i];
    Result s2("Awais", "25P-0011", mark);
    cout << "\nResult of Student 2" << endl;
    s2.Display();
    return 0;
}