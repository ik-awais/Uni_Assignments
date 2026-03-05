#include <iostream>
#include <iomanip>
#include "book.h"

void Book::bookInput(){
    cout << fixed << setprecision(2);
    cout << "Enter Title: ";
    cin >> title;
    cout << "Enter Author's name: ";
    cin >> author;
    cout << "Enter price: ";
    cin >> price;
    cout << title << endl << author << endl << price << endl;
}