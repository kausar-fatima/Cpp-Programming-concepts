#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct emp_data
{
	string Employee_ID,
		Employee_Name,
		Designation,
		Month;
	int Basic_Salary,
		Leaves,
		Allowed_leaves,
		Per_leave_deduction_rate;
	float salary;

};
int main()
{
	float sal = 0.0;
	emp_data emp[10];
	ofstream ofile;
	ofile.open("File management.txt");
	if (!ofile.is_open()) {
        cout << "Error opening the file!" << endl;
        return 1;
    }
	ofile << "Employee ID" << "   " << "Employee name" << "   " << "Designation" << "   " << "Basic Salary" << "   " << "Leaves" << "   " << "Allowed Leaves" << "   " << "Deduction rate per leave" << "   " << "Salary" << endl;
	for (int i = 1; i <= 4; i++)
	{
		cout << "Employee ID of " << i << " employee: ";
		cin >> emp[i].Employee_ID;
		ofile << emp[i].Employee_ID << "   ";
		cout << "Employee name of " << i << " employee: ";
		cin >> emp[i].Employee_Name;
		ofile << emp[i].Employee_Name << "   ";
		cout << "Designation of " << i << " employee: ";
		cin >> emp[i].Designation;
		ofile << emp[i].Designation << "   ";
		cout << "Basic Salray of " << i << " employee: ";
		cin >> emp[i].Basic_Salary;
		ofile << emp[i].Basic_Salary << "   ";
		cout << "Leaves of " << i << " employee: ";
		cin >> emp[i].Leaves;
		ofile << emp[i].Leaves << "   ";
		cout << "Allowed leaves of " << i << " employee: ";
		cin >> emp[i].Allowed_leaves;
		ofile << emp[i].Allowed_leaves << "   ";
		cout << "Deduction rate per leave of " << i << " employee: ";
		cin >> emp[i].Per_leave_deduction_rate;
		ofile << emp[i].Per_leave_deduction_rate << "   ";
		sal = emp[i].Basic_Salary - ((emp[i].Leaves - emp[i].Allowed_leaves) * emp[i].Per_leave_deduction_rate);
		emp[i].salary = sal;
		cout << "Salary of " << i << " employee: " << emp[i].salary;
		ofile << emp[i].salary << endl;
	}
	ofile.close();
}