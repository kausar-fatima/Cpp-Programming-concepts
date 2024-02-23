#include<iostream>
using namespace std;
int main()
{
	//task 1
	//To display the month of year
	int Month;
	cout << "I will display month of the year\n";
	cout << "Enter number of month: ";
	cin >> Month;
	switch (Month)
	{
	case 1:
		cout << "Month of the year is January\n ";
		break;
	case 2:
		cout << "Month of the year is February\n ";
		break;
	case 3:
		cout << "Month of the year is March\n ";
		break;
	case 4:
		cout << "Month of the year is April\n ";
		break;
	case 5:
		cout << "Month of the year is May\n ";
		break;
	case 6:
		cout << "Month of the year is June\n ";
		break;
	case 7:
		cout << "Month of the year is July\n ";
		break;
	case 8:
		cout << "Month of the year is August\n ";
		break;
	case 9:
		cout << "Month of the year is September\n ";
		break;
	case 10:
		cout << "Month of the year is October\n ";
		break;
	case 11:
		cout << "Month of the year is November\n ";
		break;
	case 12:
		cout << "Month of the year is December\n ";
		break;
	default:
		cout << "You have entered Invalid month\n ";
	}
}