#include<iostream>
using namespace std;
int main()
{   
	//Addition of two matrices
	const int rows = 3, cols = 4;
	int matrixA[rows][cols], matrixB[rows][cols],matrixC[rows][cols];
	cout << "Enter elements of matrixA: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			cin >> matrixA[i][j];
	}
	cout << "Enter elements of matrixB: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			cin >> matrixB[i][j];
	}
	cout << "matrixA=" << endl;
	for (int i = 0; i < rows; i++)
	{
		{
			for (int j = 0; j < cols; j++)
				cout << matrixA[i][j]<<" ";
		}
		cout<<endl;
	}
	cout << "matrixB=" << endl;;
	for (int i = 0; i < rows; i++)
	{
		{
			for (int j = 0; j < cols; j++)
				cout << matrixB[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Addition of matrix: " << endl;
	cout << "matrixC=" << endl;;
	for (int i = 0; i < rows; i++)
	{
		{
			for (int j = 0; j < cols; j++)
			{
				matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
				cout << matrixC[i][j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}