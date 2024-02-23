#include<iostream>
using namespace std;
int searchList(const int numElems,int list[], int value)
{
	int index = 0;
	int position = -1; bool found = false;
	while (index < numElems && !found)
	{
		if (list[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}
int main()
{
	const int numElements=8;
	int value = 12;
	int list[numElements];
	cout << "PLz enter the elements for array: ";
	for (int i = 0; i < numElements; i++)
	{
		cin >> list[i];
		cout << endl;
	}
	cout << "Searched value is found on: ";
	searchList( numElements,list, value);
}

