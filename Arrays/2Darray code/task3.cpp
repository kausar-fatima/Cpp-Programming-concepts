#include<iostream>
using namespace std;
int main()
{
	int array[3][3] = { 1,2,3,4,5,6,7,8,9 };
	cout << "Here I am displaying address of elements in array: " << endl;
	cout << *array << "  " << array << "  " << &array;
}