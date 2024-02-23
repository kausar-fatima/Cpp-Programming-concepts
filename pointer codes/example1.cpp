#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
void main()
{
	int* a, * b, * temp;

	cout << "Enter value of a and b: ";

	cin >> *a >> *b;

	temp = a;

	a = b;

	b = temp;

	cout << "After swapping: " << *a << *b;

	
	
}
