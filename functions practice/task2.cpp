#include<iostream>
using namespace std;

double getLength(double);
double getWidth(double);
double getArea(double, double);

void main() {
	double l, w, A;
	cout << "Plz enter length of rectangle: ";
	cin >> l;
	cout << "Your entered length is: ";
	cout << getLength(l);

	cout << "Plz enter width of rectangle: ";
	cin >> w;
	cout << "Your entered width is: ";
	cout << getLength(w);
	cout << "Area of rectangle is: " << getArea(l, w);
}

double getLength(double l) {
	return l;
}
double getWidth(double w) {
	return w;
}
double getArea(double l, double w) {
	return l * w;
}