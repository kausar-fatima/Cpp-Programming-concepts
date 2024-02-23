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
	ofile << "Employee ID" << "   " << "Employee name" << "   " << "Designation" << "   " << "Basic Salary" << "   " << "Leaves" << "   " << "Allowed Leaves" << "   " << "Deduction rate per leave" << "   " << "Salary" << endl;
	for (int i = 1; i < 4; i++)
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
    salary();
}
void salary()
{
	emp_data emp[10];
	fstream file;
	file.open("File management.txt");
	if (!file)
	{
		cout << "File is not opened" << endl ;
	}
	else
	{
		for (int i = 1; i < 4; i++)
		{
			file >> emp[i].Employee_ID;
			file >> emp[i].Employee_Name;
			file >> emp[i].Designation;
			file >> emp[i].Basic_Salary;
			file >> emp[i].Leaves;
			file >> emp[i].Allowed_leaves;
			file >> emp[i].Per_leave_deduction_rate;
			file >> emp[i].salary;
	}
		bool equal=false;
		emp_data Employee_ID[10], Employee_Name[10], Designation[10], Basic_Salary[10], Leaves[10], Allowed_leaves[10], Per_leave_deduction_rate[10], salary[10];
		for (int i = 1;i<2 ; i++)
		{
			cout << "Plz enter the employee ID of " << i << " employee: ";
			cin >> Employee_ID[i].Employee_ID;
			cout << "Employee name of " << i << " employee: ";
			cin >> Employee_Name[i].Employee_Name;
			cout << "Designation of " << i << " employee: ";
			cin >> Designation[i].Designation;
			cout << "Basic Salray of " << i << " employee: ";
			cin >> Basic_Salary[i].Basic_Salary;
			cout << "Leaves of " << i << " employee: ";
			cin >> Leaves[i].Leaves;
			cout << "Allowed leaves of " << i << " employee: ";
			cin >> Allowed_leaves[i].Allowed_leaves;
			cout << "Deduction rate per leave of " << i << " employee: ";
			cin >> Per_leave_deduction_rate[i].Per_leave_deduction_rate;
			for (int i = 1;i<2; i++)
			{
				if (emp[i].Employee_ID == Employee_ID[i].Employee_ID)
				{
					if (emp[i].Employee_Name == Employee_Name[i].Employee_Name)
					{
						if(emp[i].Designation==Designation[i].Designation)
						{
							if (emp[i].Basic_Salary == Basic_Salary[i].Basic_Salary)
							{
								if (emp[i].Leaves == Leaves[i].Leaves)
								{
									if (emp[i].Allowed_leaves == Allowed_leaves[i].Allowed_leaves)
									{
										if (emp[i].Per_leave_deduction_rate == Per_leave_deduction_rate[i].Per_leave_deduction_rate)
										{
											if (emp[i].salary == salary[i].salary)
												equal == true;
											else
												equal == false;
										}
									}
								}
							}
						}
					}
				}
			}
			if (equal == true)
			{
				float sal = Basic_Salary[i].Basic_Salary - ((Leaves[i].Leaves - Allowed_leaves[i].Allowed_leaves) * Per_leave_deduction_rate[i].Per_leave_deduction_rate);
				salary[i].salary = sal ;
				cout << "Salary of " << i << " employee: " << salary[i].salary;
			}
			if (equal == false)
			{
				cout << "Entered data does not occur in file"<<endl;
				cout << "Re_enter all data" << endl;
			}
		}
	}
}
//void input()
//{
//	emp_data emp[10];
//	for ( int i=0;i<10;i++ )
//	{
//		cout << "Plz enter the ID of " << i << " employee: ";
//		cin >> emp[i].Employee_ID;
//		if (emp[i].Employee_ID == "-1")
//		{
//			break;
//		}
//		cout << "Plz enter the name of" << i << " employee: ";
//		cin >> emp[i].Employee_Name;
//		cout << "Plz enter the designation: ";
//		cin >> emp[i].Designation;
//		i++;
//	}
//}
//void output()
//{
//	emp_data emp[10];
//	int i = 1;
//	for (int i=1;i<10;i++)
//	{
//		cout << "Plz enter the ID of " << i << " employee: ";
//		cout << emp[i].Employee_ID << endl;
//		if (emp[i].Employee_ID == "-1")
//		{
//			break;
//		}
//		cout << "Plz enter the name of" << i << " employee: ";
//		cout << emp[i].Employee_Name << endl;
//		cout << "Plz enter the designation: ";
//		cout << emp[i].Designation << endl;
//		i++;
//	}
//}
//int main()
//{
//	cout << "\nPlz enter the data of employees: "<<endl;
//	input();
//	cout << "\nEntered data of employees is: "<<endl;
//	output();
//	return 0;
//}