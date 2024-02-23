#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

void main()
{
	int sum = 0, fac = 1;
	int array[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the value of index " << i + 1 << " :";
		cin >> array[i];
	}
	for (int i = 0; i < 5; i++)
	{
		sum += *(array + i);
	}
	cout << "Sum:" << sum << endl;
	for (int i = 0; i < 5; i++)
	{
		fac = fac * *(array + i);
	}
	cout << "Factorial:" << fac << endl;

}
