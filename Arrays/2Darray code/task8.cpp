#include<iostream>
using namespace std;
int main()
{
	const int row = 4, col = 5;
	int array[row][col], sum = 0;
	cout << "Pla enter all the elements of array: " << endl;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < 5; j++)
		{
			cin >> array[i][j];
			sum += array[i][j];
		}
	cout << "Sum of all elements of 2D arrays is: " << sum;
	return 0;
}