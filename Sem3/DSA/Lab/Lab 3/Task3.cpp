#include <iostream>
using namespace std;
int* mergeDatabases(int* dbA, int sizeA, int* dbB, int sizeB){
	int SIZE = sizeA + sizeB;
	int* merged = new int[SIZE];
	int i = 0, j = 0, k = 0;
	while(k < SIZE)
	{
		if(i < sizeA && j < sizeB)
		{
			if(dbA[i] < dbB[j]) merged[k++] = dbA[i++];
			else merged[k++] = dbB[j++];
		}
		else if(i < sizeA)
		{
			merged[k++] = dbA[i++];
		}
		else
		{
			merged[k++] = dbB[j++];
		}
	}
	return merged;
}
int main(){
	int *ptrA, *ptrB, *mergedDB;
	int size1, size2;
	cout << "Enter size of 1st db: "; cin >> size1;
	ptrA = new int[size1];
	cout << "Enter data of 1st db: ";
	for (int i = 0; i < size1; i++) cin >> ptrA[i];
	cout << "Enter size of 2nd db: "; cin >> size2;
	ptrB = new int[size2];
	cout << "Enter data of 2nd db: ";
	for (int i = 0; i < size2; i++) cin >> ptrB[i];
	mergedDB = mergeDatabases(ptrA, size1, ptrB, size2);
	delete[] ptrA;
	delete[] ptrB;
	for(int i = 0; i < size1+size2; i++) cout << mergedDB[i] << " ";
	delete[] mergedDB;
	return 0;
}