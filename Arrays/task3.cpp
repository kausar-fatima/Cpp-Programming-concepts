#include<iostream>
#include<iomanip>
using namespace std;

void main() {
	int array1[5], array2[5], n = 0, n1, n2, count = 0;
	cout << "Plz enter size of array1 maximum 5: ";
	cin >> n1;
	cout << "Plz enter size of array2 maximum 5: ";
	cin >> n2;
	cout << "Enter your array1: " << endl;
	for (int i = 0; i < n1; i++)
		cin >> array1[i];
	cout << "Enter your array2: " << endl;
	for (int i = 0; i < n2; i++)
		cin >> array2[i];
	cout << "array1 is:";
	for (int i = 0; i < n1; i++)
		cout << array1[i] << endl;
	cout << "array2 is:" << endl;
	for (int i = 0; i < n2; i++)
		cout << array2[i] << endl;
	for (int count = 0; count < 5; count++)
	{
		if (array1[count] == array2[count])
			n++;
	}
	if (n == 5)
		cout << "arrays are equal\n";
	else
		cout << "arrays are not equal\n";
}