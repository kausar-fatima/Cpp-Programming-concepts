#include<iostream>
#include<string>
using namespace std;

struct Product
{
	string name;
	int model_no;
	double price;
};
void display();
int main()
{
	Product num[11];
	cout << "Enter quit for product name to quit the loop"<<endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << "Enter Product name of " << i << " product: ";
		cin >> num[i].name;
		if (num[i].name == "quit")
		{
			break;
		}
		cout << "Enter model_no. of " << i << " product: ";
		cin >> num[i].model_no;
		cout << "Enter Price of " << i << " product: ";
		cin >> num[i].price;
		cout << endl;
	}
	display();
}
void display()
{
	Product num[11];
	int i = 1;
	while(num[i].name!="quit")
	{
		cout << "Entered information of " << i << " Product: " << endl;
		cout << "Name: " << num[i].name<<endl;
		cout << "Model number: " << num[i].model_no << endl;
		cout << "Price: " << num[i].model_no << endl;
		i++;
	}
}