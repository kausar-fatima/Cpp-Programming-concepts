#include<iostream>
using namespace std;

void demo()
{
	auto Auto_variable = 0;
	static int Static_variable = 0;
	cout << "Auto=" << Auto_variable << "," << "Static=" << Static_variable << endl;
	Auto_variable++;
	Static_variable++;
}
int main()
{
	int i = 0;
	while (i < 3)
	{
		demo();
		i++;
	}
	return 0;
}