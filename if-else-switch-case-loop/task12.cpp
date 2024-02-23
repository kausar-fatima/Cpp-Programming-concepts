#include<iostream>
#include<string>
using namespace std;

int main() {
	float employee_number, gross_pay, state_tax, federal_tax, FICA_withholdings, net_pay;
	float total_gross_pay = 0, sum, total_state_tax = 0, total_federal_tax = 0, total_FICA_withholdings = 0;
	cout << "Plz enter the number of employees: ";
	while (!(cin >> employee_number) || (employee_number < 0))
	{
		cout << "Error_Plz re-enter employee-number: ";
		cin.clear();
		cin.ignore(123, '\n');
	}
	for (int i = 1; i <= employee_number; i++)
	{
		cout << "Plz enter gross pay for " << i << " employee: ";
		while (!(cin >> gross_pay) || gross_pay < 0)
		{
			cout << "Error_Plz re-enter the gross_pay: ";
			cin.clear();
			cin.ignore(123, '\n');
		}
		cout << "Plz enter state tax for " << i << " employee: ";
		while (!(cin >> state_tax) || state_tax < 0)
		{
			cout << "Error_Plz re-enter the state_tax: ";
			cin.clear();
			cin.ignore(123, '\n');
		}
		cout << "Plz enter federal tax for " << " employee: ";
		while (!(cin >> federal_tax) || federal_tax < 0)
		{
			cout << "Error_Plz re-enter the federal tax: ";
			cin.clear();
			cin.ignore(123, '\n');
		}
		cout << "Plz enter FICA withholdings for " << i << " employee";
		while (!(cin >> FICA_withholdings) || FICA_withholdings < 0)
		{
			cout << "Error_Plz re-enter the FICA_withholdings: ";
			cin.clear();
			cin.ignore(123, '\n');
		}
		net_pay = gross_pay - sum;
		cout << "Net pay will be: " << net_pay << endl;
		sum = (state_tax / 100) * gross_pay + (federal_tax / 100) * gross_pay + FICA_withholdings;
		cout << "Total taxes are: " << sum;
		total_gross_pay += gross_pay;
		total_state_tax += gross_pay * (state_tax / 100);
		total_federal_tax += gross_pay * (federal_tax / 100);
		total_FICA_withholdings += FICA_withholdings;

	}
	cout << "Total gross pay=" << total_gross_pay << endl;
	cout << "Total state tax=" << total_state_tax << endl;
	cout << "Total federal tax=" << total_federal_tax << endl;
	cout << "Total FICA withholdings=" << total_FICA_withholdings << endl;
	return 0;
}