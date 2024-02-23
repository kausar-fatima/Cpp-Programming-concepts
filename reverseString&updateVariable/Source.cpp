#include<iostream>
#include<string>
using namespace std;
void revStr(char [], int);
void updateVar(int *);
int main()
{
	const int size = 8;
	char S[size] = { 'S','o','f','t','w','a','r','e' };
	//cout << "Entered string is: " << S << endl;
	cout << "Reverse of entered string is: ";
	revStr(S,size);
	int a = 4;
	updateVar(&a);
	cout << a;
	/*const int num = 6;
	char s[num] = { 'A','n','g','l','e' };
	char temp[num];
	for (int i = 0; i < num;i++)
	{ 
		 temp[i]=s[i];
		 s[i] = '.';
		 for (int j = 0; j < num; j++)
		 {
			 cout << s[num];
		 }
	}*/
}
void revStr(char S1[], int size)
{
	for (int i = size-1; i > 0; i--)
	{
		cout<< S1[i];
	}
}
void updateVar(int *a)
{
	a=a + 10;
}
