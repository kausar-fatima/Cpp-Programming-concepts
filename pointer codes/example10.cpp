#include<iostream>
using namespace std;

void main() {
	int x = 10;
	int &y=x;
	y = 20;
	cout << x <<endl;
	cout << y <<endl;
	cout << &x <<endl;
	cout << &y <<endl;
	int* x1;
	x1= &x;
	x = 30;
	cout << x;


	int var = 5;
	int* pointVar;

	// assign address of var
	pointVar = &var;

	// change value at address pointVar
	*pointVar = 1;

	cout << var << endl; // Output: 1
}