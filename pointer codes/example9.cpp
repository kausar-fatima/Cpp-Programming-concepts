#include<iostream>
using namespace std;
void fun1(int& a, int& b);
void fun2(int* c, int* d);
int main()
{
	int a = 23, b = 32;
	int c = 54, d = 45;
	cout << "before swapping : " << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	fun1(a, b);
	fun2(&c, &d);
}
//swapping by reference operator
void fun1(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "Swapping: " << endl;
	cout << a << endl;
	cout << b << endl;
}
//swapping by dereferece operator
void fun2(int* c, int* d)
{
	int temp;
	temp = *c;
	*c = *d;
	*d = temp;
	cout << *c << endl;
	cout << *d << endl;
}