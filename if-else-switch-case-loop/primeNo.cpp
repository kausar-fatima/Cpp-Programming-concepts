#include<iostream>
using namespace std;

int main() {
	int num,count=0;
	cout << "Plz enter a number of integer datatype: ";
	cin >> num;
	cout << "Your entered number is: " << num<<endl;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			count++;
	}
	if (count == 2)
		cout << "Your entered number is prime number";
	else
		cout << "Your entered number is not prime number";
}