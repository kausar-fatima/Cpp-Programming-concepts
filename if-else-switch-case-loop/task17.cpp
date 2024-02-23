#include<iostream>
using namespace std;
int main()
{
	string salsa_names[6] = { "Salsa","Mild","Medium","Sweet","Hot","Dasty" };
	int no_of_jars[20];
	cout << "Plz enter the no. of jars for given salsa names: " << endl;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << salsa_names[i][j]<<no_of_jars[i][j];
		}
	}
}