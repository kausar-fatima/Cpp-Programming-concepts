#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	const int x=5;
	float a[x];
	cout << "Enter 5 numbers:\n";
	for (int i = 0; i < x; i++)
	{
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}
	cout << "In reverse order, they are:\n";
	for (int i = x - 1; i >= 0; i--)
	{
		cout << "a[" << i << "] : ";
		cout << a[i] << endl;
	}
}