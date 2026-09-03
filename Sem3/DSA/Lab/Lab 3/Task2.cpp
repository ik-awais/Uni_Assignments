#include <iostream>
using namespace std;

void purgeErrors(int*& readings, int& count){
	int trace = 0;
	for (int i = 0; i < count; i++) if(readings[i] == -999) trace++;

	int newCount = count - trace;
	int* newPtr = new int[newCount];

	int k = 0;
	for (int i = 0; i < count; i++)
	{
		if(readings[i] == -999) continue;
		newPtr[k++] = readings[i];
	}

	delete[] readings;
	readings = newPtr;
	count = newCount;
}

int main(){
	int size = 0;
	cout << "Enter the number of readings you want to store:";
	cin >> size;
	cout << "Enter the readings: ";
	int* ptr = new int [size];
	for (int i = 0; i < size; i++) cin >> ptr[i];
	purgeErrors(ptr, size);
	cout << "\n===All Readings of the Drone===\n";
	for (int i = 0; i < size; i++) cout << ptr[i] << " ";
	delete[] ptr;
	return 0;
}
