#include<iostream>
#include<string>
using namespace std;

struct student
{
	int ID;
	string Name;
	string Department;
	string Email;
	string Phone_no;
};
int main()
{
	student record[6];
	for (int i = 1; i <= 5; i++)
	{
		cout << "\nEnter ID of " << i << " student: ";
		cin >> record[i].ID;
		cout << "Enter name of " << i << " student: ";
		cin >> record[i].Name;
		cout << "Enter Department of " << i << " student: ";
		cin >> record[i].Department;
		cout << "Enter Email of " << i << " student: ";
		cin >> record[i].Email;
		cout << "Enter Phone number of " << i << " student: ";
		cin >> record[i].Phone_no;
	}
	for (int i = 1; i <= 5; i++)
	{
		cout << "Entered record of " << i << " student: " << endl;
		cout << "ID: " << record[i].ID << endl;
		cout << "Name: " << record[i].Name << endl;
		cout << "Department: " << record[i].Department << endl;
		cout << "Email: " << record[i].Email << endl;
		cout << "Phone number: " << record[i].Phone_no << endl;
	}
}