#include<iostream>
#include<string>
using namespace std;
int main()
{
	/*char alphabet;
	cout << "Do you want to be member of society: ";
	cin >> alphabet;
	while (!(alphabet == 'Y' || alphabet == 'y' || alphabet == 'N' || alphabet == 'n'))
	{
		cout << "Error,Plz re-enter the alphabet: ";
		cin >> alphabet;
	}*/


	int student_number;
	string student_name,
		   first, last;
	cout << "Plz enter the number of students: ";
	while (!(cin >> student_number) || (student_number < 1 || student_number>25))
	{
		cout << "Enter a number between 1 and 25: ";
		cin.clear();
		cin.ignore(123, '\n');
	}
	cout << "Name of 1 student: ";
	cin >> student_name;
	first = student_name;
	last = student_name;
	for (int i = 2; i <= student_number; i++)
	{
		cout << "Name of " << i << " student: ";
		cin >> student_name;
		if (student_name < first)
			first = student_name;
		if (student_name > last)
			last = student_name;
	}
	cout << "Name of first student: " << first << endl;
	cout << "Name of last student: " << last;
}