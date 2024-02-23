#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	/*double level;
	cin >> level;
	cout << "Currently ocean's level is: " << level << endl;
	for (int y = 1; y <= 25; y++)
	{
		if (level > 0)
		{
			cout << "Ocean's level for " << y << " year: " << y * level << endl;
		}
		else
		{
			cout << "Plz enter a positive integer\n";
			break;
		}
	}
	float calories = 3.6;
	cout << "you burned " << calories << " calories in 1 minute\n";
	for (int m = 1; m <= 30; m = m + 5)
	{
		cout << "No. of calories burned after " << m << " minutes=" << m * calories<<" calories"<<endl;
	}
	int charges = 2500;
	cout << "Currently charges per year for membership: $" << charges << endl;
	float ncharges = charges * 0.04;
	for (int y = 1; y <= 6; y++)
	{
		cout << "charges for " << y << " year membership: " << y * ncharges << endl;
	}
	int s, h;
	int t;
	cout << "What is the speed of the vehicle in mph? ";
	cin >> s;
	if (s <= 0)
	{
		cout << "negative speed is not valid";
	}
	else
	{
		cout << "How many hours it travelled? ";
		cin >> h;
		if (h < 1)
			cout << "Plz enter time greater than 1";
		else
		{
			cout << setw(4) << "Hours";
			cout << setw(25) << "Distance travelled" << endl;
			cout << "--------------------------------" << endl;
			for (t = 1; t <= h; t++)
			{
				cout << setw(3) << t << setw(15) << t * s << endl;
			}
		}
	}
	int d;
	int p = 1;
	double sum = 0.0;
	cout << "Period of time for earning: ";
	cin >> d;
	if (t < 1)
		cout << "Plz enter worked days greater than 1";
	else
	{
		cout << "Salary of 1st day: " << p << endl;
		cout << setw(12) << "Earning days" << setw(28) << "Earning Amount in $\n";
		for (int i = 1; i <= d; i++)
		{
			float s = i / 100.0;
			cout << setw(8) << i << setw(24) <<s<<"$\n";
		    sum = sum +s;
		}
		cout << "Total earned amount:     " << sum;
	}
	int k=0;
	cout << "Enter a series of integer: " << endl;

	while (k != -99)
	{
		cin >> k;
	}*/
	int s = 5,a;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Enter today's sales for store " << i<<" : ";
		cin >> a;
	}
	cout << "Sales bar chart\n";
	cout << "Each * = $100\n";
	for (int i = 1; i <= 5; i++)
	{
		cout << "Store " << i << ": ";
		{
			for (int j = 1; j <= a / 100; j++)
				cout << "*";
		}
		cout << endl;
	}
	return 0;
}
