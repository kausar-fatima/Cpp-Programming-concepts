#include<iostream>
using namespace std;
int main()
{
	int floors, rooms, occrooms, sum = 0,occsum=0,i,j;
	cout << "How many floors are there in hotel: ";
	cin >> floors;
	if (floors < 1)
		cout << "Floors can not be less than 1";
	else
	{
		for (i = 1; i <= floors; i++)
		{
			cout << "No. of rooms on " << i << " floor: ";
			cin >> rooms;
			sum += rooms;
		}
			if (rooms < 10)
				cout << "\nNumber of rooms on a floor can not be less than 10";
			else
			{
				for (j = 1; j <= floors; j++)
				{
					cout << "\nOccupied rooms on " << j << " floor: ";
					cin >> occrooms;
					occsum =occrooms;
				}
				cout << "\nTotal number of rooms in hotel: " << sum;
				cout << "\nOccupied rooms: " << occrooms;
				cout << "\nUnoccupied rooms: " << sum - occrooms;
				cout << "\nAverage of occupied rooms: " << (occrooms / sum) * 100;
			}
	}
	return 0;
}