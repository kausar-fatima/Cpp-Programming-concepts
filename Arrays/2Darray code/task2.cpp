#include<iostream>
using namespace std;
int main()
{
	const int rows = 2, cols = 2;
	int array1[rows][cols] = { {1,2},
						{3,4} };
	int array2[rows][cols] = { {5,6},
					  {7,8} };
	int array3[rows][cols];
	cout << "Fisrt matrix is: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << array1[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Second matrix is: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << array2[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Sum of matrices is: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			array3[i][j] = array1[i][j] + array2[i][j];
			cout << array3[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}