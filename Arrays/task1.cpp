#include<iostream>
using namespace std;
int main() {
	char array[] = { 'a','b','c','d','e'};
	int count = 0, i = 0;
	while (array[i]>'\0')
	{
			count++;
			i++;
	}
	cout << "No. of elements in array are: ";
	cout << count;

	const int size = 5;
	int array1[size] = { 1,2,3,4,5 };
	int array2[size];
	for (int i = 0; i < size; i++)
	{
		array2[i] = 0;
	}
	for (int i = 0; i < size; i++)
	{
		array2[i] = array1[i];
		cout << array2[i]<<" ";
	}

	const int size1 = 5;
	const int size2 = 5;
	const int size3 = size1 + size2;
	int array1[size1] = { 0,1,2,3,4 };
	int array2[size2] = { 6,7,8,9,5 };
	int array3[size3],k=0;

	for (int i = 0; i <size1; i++)
	{
		array3[k] = array1[i];
		k++;
	}
	for (int i = 0; i < size2; i++)
	{
		array3[k] = array2[i];
		k++;
	}
	for (int i = 0; i < size3; i++)
	{
		cout << array3[i]<<" ";
	}
}