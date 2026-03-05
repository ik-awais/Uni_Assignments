#include <iostream>
#include <iomanip>
#include "result.h"
using namespace std;

int main(){
    Result r1, r2;
    r1.inputData();
    r1.displayResult();
    cout << "Average marks: " << r1.calculateAverage() << endl;
    r2.inputData();
    r2.displayResult();
    cout << "Average marks: " << r2.calculateAverage() << endl;
    

    return 0;
}