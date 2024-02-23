#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int a = 10;
	int array[a], i;
	int item, location;
	bool equal = false;
	cout << "Enter your item: ";
	cin >> item;
	cout << "Plz enter the array: \n";
	for (i = 0; i < a; i++)
	{
		cin >> array[i];
		if (item == array[i])
		{
			location = i + 1;
			equal == true;
		}
	}
	if (equal)
		cout << "Entered item is not found";
	else
		cout << "Entered item is on location: " << location;

	return 0;
}