#include<iostream>
using namespace std;
int main()
{
	const int row = 4, col = 5;
	int array[row][col],min=array[0][0],max=array[0][0];
	int i, j=0;
	cout << "Enter your array elements: " << endl;
	for ( i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
			cin >> array[i][j];
	}
	cout << "Entered array is: " << endl;
	for (i = 0; i < 4; i++)
	{
		{
			for (j = 0; j < 5; j++)
			{
				cout << array[i][j] << " ";
			}
			if (max < array[i][j])
				max = array[i][j];
			if (min > array[i][j])
				min = array[i][j];
		}
		cout << endl;
	}
	cout << "Max value is: " << max << endl;
	cout << "Min value is: " << min;
	return 0;
}