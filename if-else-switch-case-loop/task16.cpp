#include<iostream>
using namespace std;

double calculateRate(double whole_sale_cost, double mark_up_percentage)
{
	return whole_sale_cost * (mark_up_percentage / 100);
}
int main()
{
	double whole_sale_cost = 0, mark_up_percentage = 0;
	cout << "Plz enter item's whole sale cost: ";
	cin >> whole_sale_cost;
	while (whole_sale_cost < 0)
	{
		cout << "Plz enter whole_sale_cost greater than 0: ";
		cin >> whole_sale_cost;
	}
	cout << "Plz enter item's mark up percentage: ";
	cin >> mark_up_percentage;
	while (mark_up_percentage < 0)
	{
		cout << "Plz enter mark_up_percentage greater than 0: ";
		cin >> mark_up_percentage;
	}
	cout << "Item's retail price: %";
	cout<<calculateRate(whole_sale_cost, mark_up_percentage);
}

