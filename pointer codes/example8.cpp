#include<iostream>
using namespace std;

void main() {
	const int size = 5;
	int array[size] = { 10,20,30,40,50 };
	int* ptr = array;
	cout << "Entered list by array is: " << endl;
	for (int i = size-1; i >= 0; i--)
	{
		cout << array[i] << endl;
		*(ptr+i) = array[i];
		cout << ptr+i << endl;
	}
	cout << "Entered list by pointer is" << endl;
	for (int i = size-1; i >= 0; i--)
	{
		cout <<*(ptr+i)<<endl;
		cout << &array[i] << endl;
	}
}