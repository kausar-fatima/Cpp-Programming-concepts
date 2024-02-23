#include<iostream>
using namespace std;

double population_size(double P, double B, double D)  
{
	double N;
	N = P + B * P - D * P;
	return N;
}
int main()
{
	double P,B,D;
	int startyears;
	int endyears;
	cout << "Plz enter the starting size of population: ";
	cin >> P;
	cout << "Plz enter the annual Birth rate: ";
	cin >> B;
	cout << "Plz enter the annual death rate: ";
	cin >> D;
	cout << "Plz enter the number of years to display. From";
	cin >> startyears;
	cout << " to ";
	cin >> endyears;
	double total = population_size(P, B, D);
	for (int i = startyears; i <= endyears; i++)
	{   
		cout << "Population for " << i << " year: " << i * total<<endl;
	}
}