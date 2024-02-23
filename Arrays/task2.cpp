#include<iostream>
#include<iomanip>
using namespace std;

void main() {
	const int cary_size = 5;
	int sqrary[cary_size]={0,1,2,3,4};
	cout << "Element\tSquare\n";
	cout << "=======\t=======\n";
	for (int i = 0; i < 5; i++)
	{
		cout << sqrary[i] << setw(10) << sqrary[i] * sqrary[i]<<endl;
	}

	int element[10];
	cout << "plz enter values for an array:\n";
	for (int i = 0; i < 10; i++)
		cin >> element[i];
	int largest = element[0];
	int smallest = element[0];
	cout << "Entered rrayy is: ";
	for (int i = 0; i < 10; i++)
	{
		cout << element[i] << endl;

		if (largest < element[i])
		{
			largest = element[i];
		}

		if (smallest > element[i])
		{
			smallest = element[i];
		}
	}
	cout << "largest value is: " << largest << endl;
	cout << "Smallest value is: " << smallest << endl;
}