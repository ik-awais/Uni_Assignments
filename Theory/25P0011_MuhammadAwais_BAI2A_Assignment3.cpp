#include <iostream>
using namespace std;
class Vector{
protected:
    int* array;
    int size;
    int check;
public:
    Vector();
    ~Vector();
    void resize();
    void push_back(int);
    void getData();
    void get(int);
    void find_len();
};
Vector::Vector(){
    size = 2;
    check = 0;
    array = new int[size];
}
void Vector::push_back(int num){
    if(check>=size)
        resize();
    array[check] = num;
    check++;
}
void Vector::resize(){
    size*=2;
    int* temp = array;
    array = new int[size];
    for(int i = 0; i < check; i++)
        array[i] = temp[i];
    delete[] temp;
}
void Vector::getData(){
    cout << "Data of Vector: ";
    for(int i = 0; i < check; i++)
        cout << array[i] << " ";
    cout << "\n";
}
void Vector::get(int index){
    index<check ? 
    cout << array[index] << "is at index[" << index << "]\n" :
    cout << "Invalid index!\n";
}
void Vector::find_len(){
    cout << "Length of Vector is: " << check << endl;
}
Vector::~Vector(){
    delete[] array;
    array = nullptr;
}