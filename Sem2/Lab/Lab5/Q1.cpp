#include <iostream>
#include <iomanip>
using namespace std;

struct Student
{
    string name;
    int ID;
    int subjects;
    int subScore[5];
};

void processPersonData(Student *ptr);

int main(){
    Student s;
    Student *ptr = &s;
    cout << "Enter Name: ";
    cin >> ptr->name;
    cout << "Enter ID: ";
    cin >> ptr->ID;
    cout << "Enter number of scores: ";
    cin >> ptr->subjects;
    cout << "Enter scores: ";
    for (int i = 0; i < ptr->subjects; i++)
    {
        cin >> ptr->subScore[i];
    }
    processPersonData(ptr);
    return 0;
}
void processPersonData(Student *ptr){
    cout << "Person Record\n============================\n";
    cout << "Name: " << ptr->name << endl;
    cout << "ID: " << ptr->ID << endl;
    cout << "Grades: ";
    for(int i = 0; i < ptr->subjects; i++)
    {
        cout << ptr->subScore[i] << " ";
    }
    float average = 0;
    for(int i = 0; i < ptr->subjects; i++)
    {
        average += ptr->subScore[i];
    }
    cout << "\nAverage Score: " << average/5 << endl;
    int max = 0;
    for(int i = 0; i < ptr->subjects; i++)
    {
        if (max < ptr->subScore[i])
        {
            max = ptr->subScore[i];
        }
    }
    int secMax = 0;
    for(int i = 0; i < ptr->subjects; i++)
    {
        if (secMax < ptr->subScore[i] && ptr->subScore[i] < max)
        {
             secMax = ptr->subScore[i];
        }
    }
    if(secMax == 0)
    {
        cout << "No second max spotted. Max and second max is same.\n";
        secMax = max;
    }
    cout << "Second Highest Score: " << secMax << endl;
    cout << "============================" << endl;
}