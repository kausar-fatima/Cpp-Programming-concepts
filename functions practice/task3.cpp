#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<cmath>

using namespace std;
//void add(int a, int b, int c)
//{
//	cout << "Plz enter the first value: ";
//	cin >> a;
//	cout << "Plz enter the second value: ";
//	cin >> b;
//	c = a + b;
//	cout << "Addition of two numbers: ";
//}
//int main()
//	{
//		int a, b, c;
//		a = 0, b = 0, c = 0;
//		add(a, b, c);
//		return 0;
//	}

void presentValue(double, double, double, double);
int main()
{
	double F, r, n, P;
	F = 0, r = 0, n = 0, P = 0;
	presentValue(P, F, r, n);
	return 0;
}
void presentValue(double P, double F, double r, double n)
{
	cout << "Plz enter the future value that you want in the account";
	cin >> F;
	cout << "Plz enter the annual interest rate: ";
	cin >> r;
	cout << "Plz enter the number of years that you plan to let the money sit in the account: ";
	cin >> n;
	P = F / pow((1 + r), n);
	cout << "The present value will be: " << P;
}
