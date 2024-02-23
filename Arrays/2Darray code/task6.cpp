#include<iostream>
using namespace std;
int main() {
	//Maximum and minimum value in specified row
	const int row = 4, col = 5;
	int array[row][col];
	int i, j = 0;
	cout << "Enter your array elements: " << endl;
	for (i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> array[i][j];
		}
	}
	int min = array[2][0], max = array[2][0];
	cout << "Entered array is: " << endl;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout <<"array["<<i<<"][" << j << "]: " << array[i][j] << " ";
			if (max < array[2][j])
			{
				max = array[2][j];
			}
			if (array[2][j] < min)
			{
				min = array[2][j];
			}

			cout << endl;
		}
	}
	cout << "Max value in row 2 is: " << max << endl;
	cout << "Min value in row 2 is: " << min;
}