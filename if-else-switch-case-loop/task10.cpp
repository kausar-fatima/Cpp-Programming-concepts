#include<iostream>
#include<string>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{
	//task 1
	/*float num1, num2;
	char select;
	float addition, subtraction, multiplication, division;
	cout << "Here we will do calculations: \n";
	cout << "Plz enter 1st number: ";
	cin >> num1;
	cout << "Plz enter 2nd number: ";
	cin >> num2;
	cout << "Plz enter your desired operation(-,+,X,/): ";
	cin >> select;
	while (select != 'quit')
	{
		if (select == '-')
			cout << "Subtraction of two numbers: " << num1 - num2 << endl;
		else if (select == '+')
			cout << "Addition of two numbers: " << num1 + num2 << endl;
		else if (select == 'X')
			cout << "Multiplications of two numbers: " << num1 * num2 << endl;
		else if (select == '/')
			cout << "Division of two numbers: " << num1 / num2 << endl;
		else if (select == 'quit')
			exit(0);
		else*/
			/*cout << "There is an error. Plz re enter the operation: \n";
		cout << "Plz enter your desired operation(-,+,X,/): ";
		cin >> select;
		
	}*/

	//task 2
	/*int years, rainfall, sum = 0, total = 0;
	cout << "Plz enter the period of time: ";
	cin >> years;
	if (years < 1)
		cout << "years can not be less than 1\n";
	else
	{
		for (int i = 1; i <= years; i++)
		{
			cout << "For " << i << " years" << endl;
			for (int j = 1; j <= 12; j++)
			{
				cout << "Inches of rainfall for " << j << " month: ";
				cin >> rainfall;
				sum += rainfall;
			}
			total = i * 12;
		}
				if (rainfall < 0)
					cout << "Rainfall can not be negative: ";
				else
				{
					cout << "Number of months: " << total<<endl;
					cout << "Total inches of rainfall: " << sum<<endl;
					cout << "Average of rainfall: " << sum / total;
				}
	}*/

	//task 3
	/*int no_of_organisms, No_of_days;
	float daily_average, population=0;
	cout << "We will predict the size of a population of organisms: \n";
	cout << "Plz enter the starting number of organisms: ";
	cin >> no_of_organisms;
	if (no_of_organisms < 2)
		cout << "Size can not be less than 2 \n";
	else
	{
		{
			cout << "Plz enter the daily increasing average in percentage: ";
		    cin >> daily_average; 
		}
		if (daily_average < 0)
			cout << "Daily average can not be less than 0\n";
		else
		{
			cout << "Plz enter the no. of days in which population will multiply: ";
			cin >> No_of_days;
		}
		if (No_of_days < 1)
			cout << "No. of days can not be less than 1";
		else
		{
			for (int i = 1; i <= No_of_days; i++)
			{
				cout << "Population for " << i << " day: ";
				population = population + (daily_average / 100) + no_of_organisms;
				cout << population<<endl;
			}
		}
	}*/
	
}