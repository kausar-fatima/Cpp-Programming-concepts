#include<iostream>
using namespace std;

void result(double squarefeet, double charges, double price, double square_feet, int labour)
{
	double N, HL, CP, LC, TC;
	N = (square_feet / squarefeet) * 4;
	HL = (squarefeet / labour) * square_feet;
	CP = (price * N);
	LC = HL * charges;
	TC = LC + CP;
	cout << "NO of gallons: " << N << endl;
	cout << "Hours of labour: " << HL << endl;
	cout << "Cost of paint: $" << CP << endl;
	cout << "Labour charges: $" << LC << endl;;
	cout << "Total Cost: $" << TC << endl;
}
int main()
{
	const double squarefeet = 110, charges = 25.00;
	const int labour = 8;
	double square_feet;
	cout << "Plz enter the Square feet of walls: ";
	cin >> square_feet;
	double price;
	cout << "Plz enter the cost of paint per gallon: $";
	cin >> price;
	cout << "Whole data is given below: " << endl;
	result(squarefeet, charges, price, square_feet, labour);
}