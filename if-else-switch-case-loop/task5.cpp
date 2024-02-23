#include<iostream>
using namespace std;
int main()
{
	const float DOLLAR = 1.00, PENNY = 0.01, NICKEL = 0.05, DIME = 0.01, QUARTER = 0.25;
	float penny, nickel, dime, quarter, coins;
	cout << "Enter the number of coins";
	cout << "Pennies: ";
	cin >> penny;
	cout << "nickels: ";
	cin >> nickel;
	cout << "dimes: ";
	cin >> dime;
	cout << "Quarters: ";
	cin >> quarter;
	coins = penny * PENNY + nickel * NICKEL + dime * DIME + quarter * QUARTER;
	if (coins == DOLLAR)
	{
		cout << "coins=1$ congrates you won the game.";
	}
	else if (coins < DOLLAR)
	{
		cout << "Coins are greater than dollar";
	}
	else if (coins < DOLLAR)
	{
		cout << "Coins are less than dollar/n";
	}
	int month, year;
	cout << "Enter the month(1-12): ";
	cin >> month;
	cout << "Enter the year: ";
	cin >> year;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "31 days: ";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "30 days: ";
	case 2:
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				cout << "days are 29";
			else
				cout << "days are 28";
		}
		else if (year % 100 != 0)
		{
			if (year % 4 != 0)
				cout << "days are 29";
			else
				cout << "days are 28";
		}
		break;
	default:
		cout << "Invalid month";
	}
		return 0;
}