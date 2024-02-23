#include<iostream>
using namespace std;

int main()
{
	const int size = 8;
	int set[size] = { 5,10,15,20,25,30,35,40 };
	int* numptr;
	int count;
	numptr = set;
	cout << "The numbers in set are:\n";
	for (int i = 0; i < size; i++)
	{
		cout << numptr[i] << endl;
	}
	for (int i = 0; i < size; i++)
	{
		cout << *(set + i) << endl;
	}
	for (int i = 0; i < size; i++)
	{
		cout << *(numptr + i) << endl;
	}
	for (int i = 0; i < size; i++)
	{
		cout << set[i] << endl;
	}
	cout << "Pointers by arithematic operation: " << endl;
	for (int i = 0; i <size; i++)
	{
		numptr--;
		cout << *numptr << endl;
	}
	cout << "The addresses of numbers in set are:\n";
	for (int i = 0; i < size; i++)
	{
		cout << &numptr[i] << endl;
	}
	for (int i = 0; i < size; i++)
	{
		cout << (set + i) << endl;
	}
	for (int i = 0; i < size; i++)
	{
		cout << (numptr + i) << endl;
	}
	for (int i = 0; i < size; i++)
	{
		cout << &set[i] << endl;
	}
	cout << "Address by arithematic operation: \n";
	for (int i = 0; i < size; i++)
	{
		cout << numptr++ << endl;
	}
	return 0;
}
