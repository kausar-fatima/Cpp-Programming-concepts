#include<iostream>
using namespace std;
int main()
{
	double annual_interest_rate, starting_balance, No_of_months, deposited_amount, amount_withdrawn, monthly_interest;
	double double_total_amount = 0, total_interest = 0, total_withdrawn = 0;
	double total_deposited_amount = 0, total_amount_withdrawn =0, monthly_inerest = 0;
	cout << "Plz enter the annual_interest_rate: ";
	cin >> annual_interest_rate;
	cout << endl;
	cout << "Plz enter the starting balance: ";
	cin >> starting_balance;
	cout << endl;
	cout << "Plz enter the number of months that have passed since the amount was established: ";
	cin >> No_of_months;
	cout << endl;
	for (int i = 0; i < No_of_months; i++)
	{
		cout << "Plz enter the amount deposited into account during the month: " << i;
		cin >> deposited_amount;
		double_total_amount = starting_balance + deposited_amount;
		cout << "Plz enter the amount withdrawn during the month: " << i;
		cin >> amount_withdrawn;
	}
	return 0;
}