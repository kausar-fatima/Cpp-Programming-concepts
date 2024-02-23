#include<iostream>
using namespace std;
struct circle
{
	float radius;
	float diameter;
	float area;
};
circle data();
void display();
const int PI = 3.14;
int main()
{
	circle var,temp;
	cout << "Plz enter radius of the cirle: ";
	cin >> var.radius;
	cout << "Area of circle will be: " << var.area;
	display();
}
circle data(circle var)
{
	circle var;
	var.area = var.radius * var.radius * PI;
	return var;
}
void display()
{
	circle var;
	data();
}