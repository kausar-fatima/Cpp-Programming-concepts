#include<iostream>
using namespace std;
int main()
{
	const int n1=2, n2=2, n3=2;
	int m1[n1][n2];
	int m2[n2][n3];
	cout << "Plz enter elements for matrix1: "<<endl;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cin >> m1[i][j];
		}
		cout << endl;
	}
	cout << "Plz enter elements for matrix2: "<<endl;
	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < n3; j++)
		{
			cin >> m2[i][j];
		}
		cout << endl;
	}
	cout << "Entered elements of matrix1 are: "<<endl;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cout<< m1[i][j]<<" ";
		}
		cout << endl;
	}
	cout << "Entered elements of matrix2 are: "<<endl;
	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < n3; j++)
		{
			cout<< m2[i][j]<<" ";
		}
		cout << endl;
	}
	int ans[n1][n3];
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n3; j++)
			ans[i][j] = 0;
	}
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n3; j++)
		{
			for (int k = 0; k < n2; k++)
			{
				ans[i][j] += m1[i][k] * m2[k][j];
			}
		}
}
	cout << "Product of matrices will be: " << endl;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n3; j++)
		{
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}