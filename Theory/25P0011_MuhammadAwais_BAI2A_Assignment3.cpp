#include <iostream>
using namespace std;
// Vector Class
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
        return;
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
// Vector Methods as stated in Chapter 1
void Vector::get(int index){
    index<check ? 
    cout << array[index] << "is at index[" << index << "]\n" :
    cout << "Invalid index!\n";
}
void Vector::find_len(){
    cout << "Length of Vector is: " << check << endl;
}
// Required Method for Vectors' Output
void Vector::getData(){
    for(int i = 0; i < check; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}
Vector::~Vector(){
    delete[] array;
    array = nullptr;
}
// Unique Vector
class Unique_Vector : public Vector{
public:
    Unique_Vector(int);
    ~Unique_Vector() {};
    void push_back(int);
};
Unique_Vector::Unique_Vector(int size):Vector(size){};
void Unique_Vector::push_back(int num){
    for(int i = 0; i < check; i++)
    {
        if(array[i] == num)
        {
            return;
        }
    }
    Vector::push_back(num);
}
// Frequency Vector
class FrequencyVector : public Vector{
public:
    int freqArr[3];
    int j = 0;
    FrequencyVector(int);
    ~FrequencyVector();
    void push_back(int);
    void findFreq(int);
};
FrequencyVector::FrequencyVector(int size):Vector(size){}
void FrequencyVector::push_back(int num){
    Vector::push_back(num);
}
void FrequencyVector::findFreq(int findFreq){
    int freq= 0;
    for(int i = 0; i < check; i++)
    {
        if(findFreq == array[i])
        {
            freq++;
        }
    }
    freqArr[j] = freq;
    j++;
}
FrequencyVector::~FrequencyVector(){}
int main(){
    int size = 0;
    cin >> size;
    // General Vector Object
    Vector v1(size);
    int array[size];
    for(int i = 0; i < size; i++)
        cin >> array[i];
    for(int i = 0; i < size; i++)
        v1.push_back(array[i]);
    // Unqiue Vector Object
    cin >> size;
    Unique_Vector v2(size);
    for(int i = 0; i < size; i++)
        cin >> array[i];    
    for(int i = 0; i < size; i++)
        v2.push_back(array[i]);
    // Frequency Vector Object
    cin >> size;
    FrequencyVector v3(size);
    for(int i = 0; i < size; i++)
        cin >> array[i];
    for(int i = 0; i < size; i++)
        v3.push_back(array[i]);
    int findFreq[3];
    for(int i = 0; i < 3; i++)
        cin >> findFreq[i];
        // Output
    cout << "Printing Vector: ";
    v1.getData();
    cout << "Printing Unique Vector: ";
    v2.getData();
    cout << "Printing the Frequency Vector: ";
    v3.getData();
    for(int i = 0; i < 3; i++)
    {
        v3.findFreq(findFreq[i]);
    }
    for(int i = 0; i < 3; i++)
    {
        cout << v3.freqArr[i] << " ";
    }
    cout << endl;
    return 0;
}