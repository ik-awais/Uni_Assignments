#include <iostream>
#include <string>
using namespace std;

struct Student { \
  int rollNo; 
  string name; 
  float gpa; 
};

void displayAll(Student arr[], int n){
  cout << "\n===Student Records===\n";
  cout << "Roll No.   Name   GPA\n______________________\n";
  for(int i = 0; i < n; i++)
  {
    cout << arr[i].rollNo << "      " << arr[i].name
    << "      " << arr[i].gpa << endl;
  }
}

Student* findTopper(Student arr[], int n){
  float top = 0.0;
  Student* ptr = nullptr;
  for(int i = 0; i < n; i++)
  {
    if(top < arr[i].gpa)
    {
      top = arr[i].gpa;
      ptr = &arr[i];
    }
  }
  return ptr;
}

void updateGPA(Student *s, float newGpa){s->gpa = newGpa;}

int main(){
  Student batch[10];
  cout << "Enter number of students: ";
  int num;
  cin >> num;
  for (int i = 0; i < num; i++) 
  {
    cout << "Enter details of Student " << i+1 << ": \n"; 
    cout << "Roll No: "; cin >> batch[i].rollNo;
    cout << "Name: "; cin >> batch[i].name;
    cout << "GPA: "; cin >> batch[i].gpa;
  }
  displayAll(batch, num);
  Student* topper = findTopper(batch, num);
  cout << "\n______________________\n===Topper Student===\n"; 
  cout << "Name: " << topper->name << "\nGPA: " << topper->gpa << endl;
  cout << "\n______________________\n===GPA Update===\n";
  cout << "Enter roll no of student to update GPA: ";
  int input;float newGPA;
  cin >> input;
  cout << "Enter new GPA: "; cin >> newGPA;
  for(int i = 0; i < num; i++)
  {
    if(input == batch[i].rollNo)
    {
    cout << "Original GPA of " << batch[i].name << ": " << batch[i].gpa << endl;
    updateGPA(&batch[i], newGPA);
    cout << "Updated GPA of " << batch[i].name << ": " << batch[i].gpa << endl;
    break;
    }
  }
  
}
