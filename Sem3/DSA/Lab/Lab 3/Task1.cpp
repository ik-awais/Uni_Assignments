#include <iostream>
using namespace std;

void recordAltitude(int*& altitudes, int& capacity, int& currentCount, int newAltitude){
	if(currentCount >= capacity)
	{
		capacity = (capacity == 0) ? 1 : capacity * 2;
		int* newPtr = new int[capacity];
		for(int i = 0; i < currentCount; i++) newPtr[i] = altitudes[i];
		delete[] altitudes;
		altitudes = newPtr;
	}
	altitudes[currentCount++] = newAltitude;
}

int main(){
	int size = 0, count = 0, newRead = 0, choice = 0;
	cout << "Enter the number of readings you want to store:";
	cin >> size;
	int* ptr = new int[size];
	cout << "Enter number of readings you want to store right now:";
	cin >> count;
	if(count > size) count = size;   
	for (int i = 0; i < count; i++) cin >> ptr[i];
	cout << "Do you want to enter another reading?\n1. Yes\n2. No\n";
	cin >> choice;
	switch(choice)
	{
		case 1:
			cout << "Enter the new Reading:";
			cin >> newRead;
			recordAltitude(ptr, size, count, newRead);
			break;
		case 2:
			break;
		default:
			break;
	}
	cout << "\n===All Readings of the Drone===\n";
	for (int i = 0; i < count; i++) cout << ptr[i] << " " << endl;
	delete[] ptr;
	return 0;
}
