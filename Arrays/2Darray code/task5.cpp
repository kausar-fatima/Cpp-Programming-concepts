#include<iostream>
using namespace std;
int main()
{
	const int row = 4, col = 5;
	int array1[row][col], array2[row][col];
	int i, j = 0;
	cout << "Enter your array1 elements: " << endl;
	for (i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
			cin >> array1[i][j];
	}

	cout << "Enter your array2 elements: " << endl;
	for (i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
			cin >> array1[i][j];
	}
	cout << "Entered elements of array1: " << endl;
	for (i = 0; i < 4; i++)
	{
		{
			for (int j = 0; j < 5; j++)
				cout << array2[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Entered elements of array2: " << endl;
	for (i = 0; i < 4; i++)
	{
		{
			for (int j = 0; j < 5; j++)
				cout << array2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}