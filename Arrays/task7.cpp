#include<iostream>
using namespace std;
void selection(int array[], int size)
{
	for (int i = 0; i < 6; i++)
	{
		cout << "Enter your elements: ";
		cin >> array[i];
		cout << " ";
	}
	bool var = false;
	int k = 0;
	do
	{
		int max = array[k];
		for (int i = 0; i < (6 - 1); i++)
		{
			if (array[k] < array[i])
			{
				max = array[i];
				var = true;
			}
			cout << max;
		}
		k++;
	} while (k<5);
}
	int main()
{
	const int size = 6;
	int array[size];
	selection(array, size);
}