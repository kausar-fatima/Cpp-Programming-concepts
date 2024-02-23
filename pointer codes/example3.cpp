#include<iostream>
using namespace std;

void displayarray(int array[], int size);
int* duplicatarray(int *array, int size);
int main()
{
	const int size1 = 5, size2 = 6, size3 = 7;
	int array1[size1] = { 1,2,3,4,5 };
	int array2[size2] = { 1,2,3,4,5,6 };
	int array3[size3] = { 1,2,3,4,5,6,7 };
	int* duparray1 = nullptr;
	int* duparray2 = nullptr;
	int* duparray3 = nullptr;
	duparray1 = duplicatarray(array1, size1);
	duparray2= duplicatarray(array2, size2);
	duparray3= duplicatarray(array3, size3);
	cout << "Here are the original arrays: " << endl;
	displayarray(array1, size1);
	displayarray(array2, size2);
	displayarray(array3, size3);
	cout << "Here are the duplicate contents of array: " << endl;
	displayarray(duparray1, size1);
	displayarray(duparray2, size2);
	displayarray(duparray3, size3);
	delete[] duparray1;
	delete[] duparray2;
	delete[] duparray3;
	duparray1 = nullptr;
	duparray2 = nullptr;
	duparray3 = nullptr;
}
int* duplicatarray(int* array, int size)
{
	int* newarray = nullptr;
	if (size <= 0)
		return nullptr;
	newarray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newarray[i] = array[i];
	}
	return newarray;
}
void displayarray(int array[], int size)
{
	for (int i = 0; i < size; i++)
		cout << array[i];
	cout << endl;
}


