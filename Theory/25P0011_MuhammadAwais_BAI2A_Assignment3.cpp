#include <iostream>
using namespace std;
class Vector{
protected:
    int* array;
    int size;
    int check;
public:
    Vector(int);
    virtual ~Vector();
    virtual void push_back(int);
    void resize();
    void get(int);
    void find_len();
    virtual void getData();
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
    for(int i = 0; i < check; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}
Vector::~Vector(){
    delete[] array;
    array = nullptr;
}
class Unique_Vector : public Vector{
public:
    Unique_Vector(int) : Vector(size) {};
    ~Unique_Vector();
    void push_back(int);
};
void Unique_Vector::push_back(int num){
    for(int i = 0; i < check; i++)
    {
        if(array[i] == num)
        {
            cout << "Element already exists\n";
            return;
        }
    }
    if(check>=size)
        resize();
    array[check] = num;
    check++;
}
void Unique_Vector::getData(){
    for(int i = 0; i < check; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}
Unique_Vector::~Unique_Vector(){
    array = nullptr;
}
class FrequencyVector : public Vector{
    int* freqArray;
    int* uniqArray;
    int freq;
public:
    FrequencyVector(int) : Vector(size) {};
    ~FrequencyVector();
    void push_back(int);
    void findFreq(int);
};
void FrequencyVector::push_back(int num){
    for(int i = 0; i < check; i++)
    {
        if(array[i] == num)
        {
            freqArray[i]++;
        }
        if(uniqArray[i] == num)
        {
            continue;
        }
        else
        {
            uniqArray[i] = num;
        }
    }
    if(check>=size)
        resize();
    array[check] = num;
    check++;
}
void FrequencyVector::findFreq(int findFreq)
{
    for(int i = 0; i < size; i++)
    {
        if(findFreq == uniqArray[i])
        {
            cout << freqArray[i] << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}
void FrequencyVector::getData(){
    for(int i = 0; i < check; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}
FrequencyVector::~FrequencyVector(){
    delete[] array;
    array = nullptr;
    delete[] uniqArray;
    uniqArray = nullptr;
    delete[] freqArray;
    freqArray = nullptr;
}
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
    for(int i = 1; i <= 3; i++)
        cin >> findFreq[i];
        // Output
    v1.getData();
    v2.Unique_Vector::getData();
    v3.FrequencyVector::getData();
    for(int i = 1; i <= 3; i++)
        v3.findFreq(findFreq[i]);
    return 0;
}