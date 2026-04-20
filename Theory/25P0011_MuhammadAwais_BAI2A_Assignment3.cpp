#include <iostream>
using namespace std;
class Vector{
protected:
    int* array;
    int size;
    int check;
public:
    Vector(int);
    ~Vector();
    void push_back(int);
    void resize();
    void get(int);
    void find_len();
    void getData();
};
Vector::Vector(int size){
    if(size <= 0)
    {
        cout << "Invalid size!\n";
        return;
    }
    this->size = size;
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
void Vector::get(int index){
    index<check ? 
    cout << array[index] << "is at index[" << index << "]\n" :
    cout << "Invalid index!\n";
}
void Vector::find_len(){
    cout << "Length of Vector is: " << check << endl;
}
void Vector::getData(){
    cout << "Data of Vector: ";
    for(int i = 0; i < check; i++)
        cout << array[i] << " ";
    cout << "\n";
}
Vector::~Vector(){
    delete[] array;
    array = nullptr;
}
class Unique_Vector : public Vector{
public:
    Unique_Vector(int);
    void push_back(int);
};
Unique_Vector::Unique_Vector(int size){
    this->size = size;
}
class FrequencyVector : public Vector{
    int* freqArray;
    int freqsize;
public:
    FrequencyVector(int);
    ~FrequencyVector();
    void push_back(int);
};
FrequencyVector::FrequencyVector(int size){
    this->size = size;
}
int main(){
    int size = 0;
    cin >> size;
    int array[size];
    for(int i = 0; i < size; i++)
        cin >> array[i];
    Vector v1(size);
    cin >> size;
    Unique_Vector v2(size);
    cin >> size;
    FrequencyVector v3(size);
}