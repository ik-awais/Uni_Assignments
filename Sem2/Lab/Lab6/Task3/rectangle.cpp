#include <iostream>
#include "rectangle.h"
using namespace std;

float Rectangle::calculateArea(){
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    return length*width;
}