#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//const int size = 6;
	//int aim[6]={8,9,7,6,8,4};
	//int hy[6] = { 0 };
	//cout << aim;
	//for (int i = 0; i < size; i++)
	//{
	//	//cout << aim[i]<<endl;
	//	aim[i] = hy[i];
	//	cout << hy[i]<<endl;
	//}
	const int NUM_EMPLOYEES = 5;
	int hours[NUM_EMPLOYEES];
	double payrate;
	double grosspay;
	cout << "Enter the hours worked by " << NUM_EMPLOYEES << " earn the same hourly rate.\n";
	for (int index = 0; index < NUM_EMPLOYEES; index++)
	{
		cout << "Employee #" << (index + 1) << ": ";
		cin >> hours[index];
	}
	cout << "Enter the hourly pay rate for each employee: ";
	cin >> payrate;
	cout << "Here is the grosspay for each employee: \n";
	cout << fixed << showpoint << setprecision(2);
	for (int index = 0; index < NUM_EMPLOYEES; index++)
	{
		grosspay = hours[index] * payrate;
		cout << "Employee #" << (index + 1);
		cout << ": $" << grosspay << endl;
	}
	//int size = 5;
	//int array[5] = { 6,8,9,7 };
	///*for (int val : array)
	//{
	//	cout << val << endl;
	//}*/

	//for (int i = 0; i <=size; i++)
	//{
	//	cout << array[i] << endl;
	//}

	return 0;
}