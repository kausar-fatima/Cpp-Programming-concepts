#include<iostream>
#include<string>
using namespace std;

struct employee_data
{
	int EmployeeNumber;
	string Name;
	double Basic_Salary;
	double House_Allowances;
	double Medical_Allowances;
	double tax;
	double gross_pay;
	double net_salary;
};
void empsalary();
void display();
int main()
{
	employee_data salary;
	cout << "Enter the Employee Number: ";
	cin >> salary.EmployeeNumber;
	cout << "Enter the employee name: ";
	cin >> salary.Name;
	cout << "Enter the Basic Salary: ";
	cin >> salary.Basic_Salary;
	empsalary();
	cout << "\nEmployee Salary Data is: " << endl;
	display();
}
void empsalary()
{
	employee_data salary;
	salary.House_Allowances = 0.1 * salary.Basic_Salary;
	salary.Medical_Allowances = 0.05 * salary.Basic_Salary;
	salary.tax = 0.04 * salary.Basic_Salary;
	salary.gross_pay = salary.Basic_Salary + salary.House_Allowances + salary.Medical_Allowances;
	salary.net_salary = salary.gross_pay - salary.tax;
}
void display()
{

	employee_data EmployeeNumber, Name, Basic_Salary, House_Allowances, Medical_Allowances, Tax, gross_pay, net_salary;
	cout << "	Employee Name :" << Name.Name << endl;
	cout << "Basic Salary :" << Basic_Salary.Basic_Salary << endl;
	cout << "House Allowence :" << House_Allowances.House_Allowances << endl;
	cout << "Medical Allowance :" << Medical_Allowances.Medical_Allowances << endl;
	cout << "Gross Salary :" << gross_pay.gross_pay << endl;
	cout << "Tax Deduction :" << Tax.tax << endl;
	cout << "Net Salary :" << net_salary.net_salary << endl;

}