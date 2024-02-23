#include<iostream>
using namespace std;

void main() {
	//Task 3
		//To display earned points on purchased books
	int number;
	cout << "\nI will display earned points on purchased books\n";
	cout << "Enter the number of purchased books: ";
	cin >> number;
	switch (number)
	{
	case 0:
		cout << "You Earned 0 points\n ";
		break;
	case 1:
		cout << "You Earned  5 points \n";
		break;
	case 2:
		cout << "You Earned  15 points\n ";
		break;
	case 3:
		cout << "You Earned 30 points\n ";
		break;
	case 4:
		cout << "You Earned 60 points \n";
		break;
	default:
		cout << "You entered invalid input\n";
	}

}