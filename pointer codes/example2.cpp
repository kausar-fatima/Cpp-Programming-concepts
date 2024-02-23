#include<iostream>
using namespace std;

int* Createarray(int);
int main()
{
	const int size = 5;
	int* newarray = Createarray(size);
	cout << "Enter array elements: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> newarray[i];
		cout << endl;
	}
	cout << "Your entered array is: ";
	for (int i = 0; i < size; i++)
	{
		cout << *(newarray + i) << endl;
	}
}
int* Createarray(int size)
{
	return new int[size];
}