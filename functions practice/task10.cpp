#include<iostream>
#include<math.h>
using namespace std;
double sale(string division)
{
	double sale;
	cin >> sale;
	return sale;
}
void findHighest(double sale1, double sale2, double sale3, double sale4)
{
	double large;
	string division;
	if (sale1 > sale2 && sale1 > sale3 && sale1 > sale4)
	{
		large = sale1;
		division = "Northeast";
	}
	if (sale2 > sale1 && sale2 > sale3 && sale2 > sale4)
	{
		large = sale2;
		division = "Northwest";
	}
	if (sale3 > sale1 && sale3 > sale2 && sale3 > sale4)
	{
		large = sale3;
		division = "Southeast";
	}
	if (sale4 > sale1 && sale4 > sale2 && sale4 > sale3)
	{
		large = sale4;
		division = "Southwest";
	}
	cout<<"Largest sale is of "<<division<<" Which is: "<<large;
}
int main()
{
	string div1 = "Northeast",
		   div2 = "Northwest",
		   div3 = "Southeast",
		   div4 = "Southwest";
	cout << "Plz enter the sales for " << div1 << ": $";
	double sale1 = sale(div1);
	cout << "Plz enter the sales for " << div2 << ": $";
	double sale2 = sale(div2);
	cout << "Plz enter the sales for " << div3 << ": $";
	double sale3 = sale(div3);
	cout << "Plz enter the sales for " << div4 << ": $";
	double sale4 = sale(div4);
	 findHighest(sale1, sale2, sale3, sale4);
	return 0;
}