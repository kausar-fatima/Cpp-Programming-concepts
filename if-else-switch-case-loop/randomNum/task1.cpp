#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	for (int i = 1; i <=2; i++)
	{
		cout << 1+rand() % i << 1+rand() % i * 5;
	}
	return 0;
}