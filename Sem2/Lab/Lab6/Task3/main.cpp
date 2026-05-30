#include <iostream>
#include <iomanip>
#include "rectangle.h"
using namespace std;

int main(){
    cout << fixed << setprecision(2);
    Rectangle r1;
    cout << r1.calculateArea() << endl;
}