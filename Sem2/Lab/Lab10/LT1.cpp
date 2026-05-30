#include <iostream>
using namespace std;
class Distance{
private:
    int feet;
    int inches;
public:
    Distance();
    Distance operator+(const Distance& add);
    bool operator==(const Distance& compare);
    void setData(int, int);
    void showData();
};
Distance::Distance(){
    feet = 0;
    inches = 0;
}
Distance Distance::operator+(const Distance& add){
        Distance result;
        result.feet = feet+add.feet;
        result.inches = inches+add.inches;
        result.feet += (result.inches / 12);
        result.inches %= 12;
    return result;
}
bool Distance::operator==(const Distance& compare){
    return (feet == compare.feet && inches == compare.inches);
}
void Distance::setData(int feet, int inches){
    this->feet = feet + (inches / 12);
    this->inches = inches % 12;
}
void Distance::showData(){
    cout << "Object's Feet & Inches: " << feet << ", " << inches << endl; 
}
int main(){
    Distance obj1, obj2;
    obj1.setData(1, 2), obj2.setData(1, 2);
    obj1.showData();
    obj2.showData();
    Distance obj3 = obj1+obj2;
    cout << "Sum of both objects: " << endl;
    obj3.showData(); 
    cout << "Status of Comparison: " << (obj1==obj2) << endl;
}