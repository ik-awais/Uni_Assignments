#include <iostream>
using namespace std;

class Result{
    public:
    string name;
    int roll_no;
    int marks[5];
    void inputData();
    float calculateAverage();
    void displayResult();
};