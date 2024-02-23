//To manage the employees data
#include<iostream>    //For input/output operation
#include<fstream>    //For file management
#include <string>    //For string functions
#include<iomanip> 

using namespace std;


//Structure for attributes of entity(Employees)
struct employee
{
	string empID;
	string empName;
	string designation;
	double basicSalary;
	string month;
	int leaves;
	int allowLeaves;
	double deduction;
	double salary;
};


//Functions Prototypes
void display();
void storerecord();
void userinput();
void printsalary();
void newEmployee();


int choice;     //Global variable
char Select;    //Global variable


// Main Function(For management of employees data)
int main()
{
	storerecord();
	//Loop for different cases entered by user
	do
	{   
		display();           //Will display menu for user
		switch (choice)        //Switch satement for different choices
		{
		case 1:
			userinput();       //will ask user to enter data of existing employee
			break;
		case 2:
			printsalary();      //will print salary slips of employees for entered month
			break;
		case 3:
			newEmployee();       //will ask to enter data of new emplyee
			break;
		case 4:
			break;            //To break the switch statement
		default:
			cout << "Entered choice is invalid\n" << endl;         //For invalid choice entered by user
		}

		cout << "\nDo you want to re-select the choice" << endl;      //Ask user for loop to terminate or to continue it
		cout << "Enter 'Y' and 'y' for yes, 'N' and 'n' for no : ";
		cin >> Select;

	} while (Select == 'Y' || Select == 'y');
}


//For displaying menu for users
void display()
{   
	cout << "\n**********" << "MENU" << setw(10) << "**********" << endl;
	cout << "\nSelect your choice: \n"<<endl ;
	cout << "******************************************************************\n";
	cout << "1. To enter the data of specified month to manage salary"<<endl;
	cout << "2. To print salary slip" << endl;
	cout << "3. To enter data of new employee" << endl;
	cout << "4. To quit"<<endl;
	cout << "******************************************************************\n";
	cout << "choice: ";
	cin >> choice;
}


//For storing data in Employees Management System
void storerecord() 
{
	const int SIZE = 10;  //Contant variable for size of array

	//Employees data which will be stored in file
	employee p[SIZE];

	p[0] = { "E001","Usman_Raza","Lecturer",70000,"Febuary",5,3,2000,66000 };
	p[1] = { "E002","Zeeshan_Akram","Assistant_Professor",100000,"February",0,4,3000,100000 };
	p[2] = { "E003","Saima_Ahmad","Associate_Professor",150000,"March",0,5,5000,150000 };
	p[3] = { "E004","Irfan_Ahmad","Assistant_Professor",100000,"April",10,4,3000,82000 };
	p[4] = { "E005","Haider_Khan","Assistant_Professor",100000,"May",15,4,3000,67000 };
	p[5] = { "E006","Saad_Raza","Associate_Professor",150000,"June",2,5,5000,150000 };
	p[6] = { "E007","Saima_Akram","Associate_Professor",150000,"July",5,5,5000,150000 };
	p[7] = { "E008","Bushra_Zulfiqar","Professor",180000,"August",0,6,6000,180000 };
	p[8] = { "E009","Ali_Raza","Lecturer",70000,"November",0,3,2000,70000 };
	p[9] = { "E010","Farah_Hussain","Lecturer",70000,"January",0,3,2000,70000 };

	//To write data in EmployeesManagementSystem
	ofstream write;

	write.open("EmployeesManagementSystem.txt");

	//If file will not open
	if (!write)
	{
		cout << "File not opened" << endl;
	}

	//If file is opened
	else 
	{
		for (int index = 0; index < SIZE; index++)
		{
			write << p[index].empID << "\t";
			write << p[index].empName << "\t";
			write << p[index].designation << "\t";
			write << p[index].basicSalary << "\t";
			write << p[index].month << "\t";
			write << p[index].leaves << "\t";
			write << p[index].allowLeaves << "\t";
			write << p[index].deduction << "\t";
			write << p[index].salary <<endl;
		}
	}
	write.close();
}


//Will ask user to enter data of existing employees and will compute their salaries
void userinput()
{
	cout << "\n**********" << "CASE1" << setw(10) << "**********" << endl;
	employee p[10];

	ifstream read;
	read.open("EmployeesManagementSystem.txt");

	//If file is not opened
	if (!read)
	{
		cout << "File not opened" << endl;
	}

	//If file is opened
	else
	{
		for (int i = 0; i < 10; i++)
		{
			read >> p[i].empID;
			read >> p[i].empName;
			read >> p[i].designation;
			read >> p[i].basicSalary;
			read >> p[i].month;
			read >> p[i].leaves;
			read >> p[i].allowLeaves;
			read >> p[i].deduction;
			read >> p[i].salary;
		}
		read.close();
	}
	cout << "\nEnter the data of employee: " << endl;
	cout << "******************************************************************\n";
	cout << "Plz enter the data of existing employee: " << endl;

	//Variables for new employees
	employee Employee_ID, Employee_Name, Designation, Basic_Salary, Leaves, Allowed_leaves, Month, Per_leave_deduction_rate, salary;
	int i = 0, num;

	//Entered employee data will be compared with the existing data in file
	do
	{
		ofstream write;
		write.open("EmployeesManagementSystem.txt", ios::app);
		{   
			cout << "******************************************************************\n";
			cout << "Plz enter the employee ID of employee: ";
			cin >> Employee_ID.empID;  //Ask for employee ID

			//Employee ID will be compared will all employee ID exist in file
			bool flag = false;
		check:
			for (int i = 0; i < 10; i++)
			{
				if (Employee_ID.empID == p[i].empID)
				{
					flag = true;
					break;
				}
			}

			while (!flag)    //Loop for input validation
			{
				cout << "\nEntered employee ID does not exist in file" << endl;
				cout << "Re-enter the employee ID: ";
				cin >> Employee_ID.empID;
				goto check;//Ask for employee ID
			}
			write <<"\n"<< Employee_ID.empID << "\t";    //Write employee ID in file

			cout << "Employee name of employee:             ";
			cin >> Employee_Name.empName;            //Ask for employee name

			while (Employee_Name.empName != p[i].empName)     //Loop for input validation
			{
				cout << "\nEntered employee Name does not exist in file" << endl;
				cout << "Re-enter the employee Name:         ";
				cin >> Employee_Name.empName;          //Ask for employee name
			}
			write << Employee_Name.empName << "\t";     //Write employee name in file

			cout << "Designation of employee:               ";
			cin >> Designation.designation;        //Ask for employee designation

			while (Designation.designation != p[i].designation)      //Loop for input validation
			{
				cout << "\nEntered employee designation does not exist in file" << endl;
				cout << "Re-enter the employee designation:  ";
				cin >> Designation.designation;
			}
			write << Designation.designation << "\t";      //Write employee designation in file

			cout << "Basic Salray of employee:              ";
			cin >> Basic_Salary.basicSalary;          //Ask for employee basic salary

			while (Basic_Salary.basicSalary != p[i].basicSalary)            //Loop for input validation
			{
				cout << "\nEntered employee basic salary does not exist in file" << endl;
				cout << "Re-enter the employee basic salary: ";
				cin >> Basic_Salary.basicSalary;
			}
			write << Basic_Salary.basicSalary << "\t";        //Write employee basic salary in file

			cout << "Salary month of employee:              ";
			cin >> Month.month;               //Ask for salary month

			write << Month.month << "\t";          //Write salary month in file

			cout << "Leaves of employee:                    ";
			cin >> Leaves.leaves;              //Ask for employee basic salary

			write << Leaves.leaves << "\t";            //write leaves in file 

			cout << "Allowed leaves of employee:            ";
			cin >> Allowed_leaves.allowLeaves;      //Ask for employee allowed leaves

			while (Allowed_leaves.allowLeaves != p[i].allowLeaves)            //Loop for input validation
			{
				cout << "\nEntered employee allowed leaves does not exist in file" << endl;
				cout << "Re-enter the employee allowed leaves salary: ";
				cin >> Allowed_leaves.allowLeaves;
			}

			write << Allowed_leaves.allowLeaves << "\t";        //Write employee allowed leaves

			cout << "Deduction rate per leave of employee:  ";
			cin >> Per_leave_deduction_rate.deduction;           //Ask for employee per leave deduction rate

			while (Per_leave_deduction_rate.deduction != p[i].deduction)           //Loop for input validation
			{
				cout << "\nEntered employee deduction rate does not exist in file" << endl;
				cout << "Re-enter the employee deduction: ";
				cin >> Per_leave_deduction_rate.deduction;            //Ask for per leave deduction rate of employee
			}

			write << Per_leave_deduction_rate.deduction << "\t";         //write per leave deduction rate in file

			cout << "Salary of employee:                    ";

			if (Allowed_leaves.allowLeaves < Leaves.leaves)         //Condition for calculation of salary
			{
				salary.salary = Basic_Salary.basicSalary - ((Leaves.leaves - Allowed_leaves.allowLeaves) * Per_leave_deduction_rate.deduction);
			}

			else
			{
				salary.salary = Basic_Salary.basicSalary;
			}

			cout << salary.salary << endl;        //Display salary
			cout << "******************************************************************\n";

			write << salary.salary << "\t";           //Write salary in file
			 
			write.close();
		}
		cout << "\nDo you want to re-enter data?" << endl;
		cout << "enter 1 for yes AND -1 for no: ";
		cin >> num;

		cout << endl;

	} while (num == 1);
}


//To  print salary slip of a specified month for all employee
void printsalary()
{   
	cout << "\n**********" << "CASE2" << setw(10) << "**********" << endl;
	string month;
	employee p;
	cout << "\nPlease Enter Month : ";
	cin >> month;       //Ask for month

	employee p1[500];

	int count = 0;

	int i = 0;
	ifstream read;    //To read from file

	read.open("EmployeesManagementSystem.txt");

	if (!read)
		cout << "File not open." << endl;

	while (!read.eof()) {
		read >> p.empID;
		read >> p.empName;
		read >> p.designation;
		read >> p.basicSalary;
		read >> p.month;
		read >> p.leaves;
		read >> p.allowLeaves;
		read >> p.deduction;
		read >> p.salary;

		//Entered month is compared with the month exist in file
		if (p.month == month)
		{
			p1[count].empID = p.empID;
			p1[count].empName = p.empName;
			p1[count].designation = p.designation;
			p1[count].basicSalary = p.basicSalary;
			p1[count].month = p.month;
			p1[count].leaves = p.leaves;
			p1[count].allowLeaves = p.allowLeaves;
			p1[count].deduction = p.deduction;
			p1[count].salary = p.salary;
			count++;
		}
	}
	read.close();
	
	// To write salary slip in separate file and to display it
	cout << "System will process salary of each employee and generate the slips as: \n";
	cout << endl;

	for (int i = 0; i < count; i++)
	{
		ofstream write;     
		write.open(p1[i].empName + " SalarySlip.txt");

		write << "Salary month :  " << setw(30) << p1[i].month << endl;
		cout << "Salary month :   " << setw(30) << p1[i].month << endl;
		write << "Employee Name : " << setw(30) << p1[i].empName << endl;
		cout << "Employee Name :  " << setw(30) << p1[i].empName << endl;
		write << "Designation :   " << setw(30) << p1[i].designation << endl;
		cout << "Designation :    " << setw(30) << p1[i].designation << endl;
		write << "Salary :        " << setw(30) << p1[i].salary << endl;
		cout << "Salary :         " << setw(30) << p1[i].salary << endl;
		cout << p1[i].empID << "_" << p1[i].empName << "_" << p1[i].month << "SalarySlip.txt\n" << endl;
		cout << "*************************************************" << endl;
		write.close();
	}

}

//For the new employee data and to store it in file
void newEmployee() 
{
	cout << "\n**********" << "CASE3" << setw(10) << "**********" << endl;
	char option;
	do
	{
		employee p;
		ofstream write;
		write.open("EmployeesManagementSystem.txt", ios::app);

		//If file is not opened
		if (!write)
		{
			cout << "File is not opened" << endl;
		}
		
		//If file is opened
		else
		{
			cout << "\nPlease enter information of employee.\n";
			cout << "ID :                 "; 
			cin >> p.empID;         //Ask for Employee ID
			cout << "*************************************************" << endl;
			write << p.empID << "\t";    //Write Employee ID in file

			cout << "Name :               ";
			cin >> p.empName;        //Ask for employee name
			cout << "*************************************************" << endl;
			write << p.empName << "\t";    //write employee name in file

			cout << "Designation :        ";
			cin >> p.designation;        //Ask for Designation of employee
			cout << "*************************************************" << endl;
			write << p.designation << "\t";      //Write Designation of employee in file

			cout << "Basic Salary :       ";
			cin >> p.basicSalary;     //Ask for basic Salary
			cout << "*************************************************" << endl;
			write << p.basicSalary << "\t";    //Write basic salary in file

			cout << "Month :              ";
			cin >> p.month;       //Ask for name of month
			cout << "*************************************************" << endl;
			write << p.month << "\t";     //write name of month in file

			cout << "Leaves in month " << p.month << " :     ";
			cin >> p.leaves;       //Ask for leaves
			cout << "*************************************************" << endl;

			write << p.leaves << "\t";   //write leaves in file

			cout << "Allowed Leaves :     ";
			cin >> p.allowLeaves;       //Ask for allowed leaves
			cout << "*************************************************" << endl;

			write << p.allowLeaves << "\t";    //write allowed leaves in file

			cout << "Deduction :          ";
			cin >> p.deduction;    //Ask for deduction rate per leave
			cout << "*************************************************" << endl;

			write << p.deduction << "\t";   //Write deduction rate per leave in file

			cout << "Salary :             ";   
			if (p.allowLeaves < p.leaves)    //condition for calculation of salary
			{
				p.salary = p.basicSalary - ((p.leaves - p.allowLeaves) * p.deduction);
			}
			else
			{
				p.salary = p.basicSalary;
			}

			cout << p.salary << endl;    //display salary
			cout << "*************************************************" << endl;

			write << p.salary << "\t";   //write salary in file

			write.close();
		}
		cout << "Do you want to enter more new employees data? " << endl;    //Loop will terminate or continue
		cout << "Enter Y for yes and N for no: ";
		cin >> option;

		cout<<"*************************************************\n";

	} while (option == 'Y');    //Loop will move to next iterate on Y
}
