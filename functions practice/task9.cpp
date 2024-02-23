#include<iostream>
using namespace std;

int no_emp()
{   
	int emp;
	cin >> emp;
	return emp;
}
int miss_days(int no_employee)
{
	int days;
	int total = 0;
	cout << "Plz enter the number of days missed by each employee: "<<endl;
	for (int i = 1; i <= no_employee;i++)
	{
		cout << "Missed days by " << i << " employee: ";
		cin >> days;
		cout << endl;
		total += days;
	}
	return total;
}

double days_Avg(int no_employee, int days)
{
	double Avg;
	Avg = days / no_employee;
	return Avg;
}

int main()
{
	cout << "Plz enter the number of employees: ";
	int no_employee = no_emp();
	int days = miss_days(no_employee);
	cout << days_Avg(no_employee, days);
}