#include<iostream>
#include<iomanip>
using namespace std;
bool func(int b);
double func2(int a , int b , int c, int d);
void test(int = 2, int = 4, int = 6);

int main()
{
	int b = 5,c=60,d=8;
	double a=9.788;
	cout << fixed << setprecision(2) << a<<endl;
	if (func(b))
		cout << "True";
	else
		cout << "False";
	func2(a,b,c,d);
	test();
	test(6);
	test(3, 9);
	test(1, 5, 7);
}
bool func(int b)
{
	if (b == 5)
		return true;
	else
		return false;
}
double func2(int a=40, int b=60, int c=40, int d=50)
{
	return a + b + c + d;
}
void test(int first, int second, int third)
{
	first += 3;
	second += 6;
	third += 9;
	cout << first << " " << second << " " << third << endl;
}