#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Plz enter a character: ";
	cin >> ch;
	switch (ch)
	{
	case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'O':
	case 'o':
	case 'U':
	case 'u':
		cout << "Entered character is vowel";
		break;
	default:
		cout << "Entered character is not a vowel";
	}
	return 0;
}