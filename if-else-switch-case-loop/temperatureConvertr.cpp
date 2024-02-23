#include<iostream>
#include<string>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int main() {
	double Celsius_temperature = 0;
	double Fahrenheit_temperature;
	cout << "Temperature Converter:" << endl;
	cout << "Celsius to Fahrenheit: " << endl;
	cout << "Celsius_temperature" << setw(28) << "Fahrenheit_temperature" << endl;
	for (int i = 0; i <= 20; i++)
	{
		Fahrenheit_temperature = (9 / 5) * i + 32;
		cout << i << setw(45) << Fahrenheit_temperature << endl;
	}
	return 0;
}