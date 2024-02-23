#include<iostream>
using namespace std;

void main() {
	//Task 4
		//To find greater and smaller number
	int x, y;
	cout << "\nTo find greater and smaller number: " << endl;
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	bool z = (x > y);
	switch (x > y) {
	case 1:
		cout << x << " is greater number\n" << y << " is smaller number\n";
		break;
	case 0:
		if (x < y)
			cout << y << " is greater number\n" << x << " is smaller number\n";
		else
			cout << "Both numbers are equal\n";
		break;
	Default:
		cout << "Entered invalid number\n";
	}

	return 0;
}
}