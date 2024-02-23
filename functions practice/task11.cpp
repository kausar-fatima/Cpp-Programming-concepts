#include<iostream>
using namespace std;

double calculateRetail(double whole_sale_cost, double mark_up_percentage)
{
	double item_retail_price;
	item_retail_price = (whole_sale_cost * mark_up_percentage) + whole_sale_cost;
	return item_retail_price;
}
int main()
{
	double whole_sale_cost;
	double mark_up_percentage;
	cout << "Plz enter the whole sale cost: ";
	cin >> whole_sale_cost;
	cout << "Plz enter the markup percentage: ";
	cin >> mark_up_percentage;
	cout << "Yuor retail price is: ";
	cout << calculateRetail(whole_sale_cost, whole_sale_cost);
}