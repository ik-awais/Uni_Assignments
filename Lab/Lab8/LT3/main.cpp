#include "LT3.h"
int main(){
    Employee e1("X1", "01", 25000.34),
    e2("X2", "02", 26000.32),
    e3("X3", "03", 27000.64),
    e4("X4", "04", 33000.32),
    e5("X5", "05", 35000.39),
    e6("X6", "06", 36000.89),
    e7("X7", "07", 38000.56),
    e8("X8", "08", 40000.56),
    e9("X9", "09", 41005.56),
    e10("X10", "010", 50000.99),
    t11("Test", "011", 100.56);
    e1.display(); e2.display(); e3.display();
    e4.display(); e5.display(); e6.display();
    e7.display(); e8.display(); e9.display();
    e10.display(); t11.display();
    cout << "Employees Count: " << Employee::countPublic() << endl;
    return 0;
}