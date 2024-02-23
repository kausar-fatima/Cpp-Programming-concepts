#include<iostream>
using namespace std;
int main()
{
	int a;
	for (int i = 9; i <= 13; i = i + 2)
	{
		int b = i +1;
			cout << b << " " << i<<" ";
	}
	char b = 65,d=0;
	for (int i = 0; i <= 15; i = i + 3)
	{
		char c = b + i+d;
		d++;
			cout << c;
	}
	return 0;
}