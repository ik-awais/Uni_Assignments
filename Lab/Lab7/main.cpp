#include "LT3.h"
int main(){
    cout << fixed << setprecision(2);
    Employee e1;
    cout << "\nEmployee 1 info: \n";
    e1.Display();
    Employee e2("Awais", "25P-0011", 150000.59);
    cout << "\nEmployee 2 info: \n";
    e2.Display();
    Employee e3(e2);
    cout << "\nEmployee 3 info: \n";
    e3.Display();
}