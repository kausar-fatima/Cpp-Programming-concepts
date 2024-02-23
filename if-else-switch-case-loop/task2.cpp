#include<iostream>
using namespace std;

void main() {
	//Task 2
		//To find vowel and consonant alphabet
	char alphabet;
	cout << "\nYou will enter an alphabet and I will tell you whether it is vowel or consonant\n";
	cout << "Enter an alphabet: ";
	cin >> alphabet;
	switch (alphabet)
	{
	case 'a':
		cout << "Entered alphabet is vowel\n";
		break;
	case 'A':
		cout << "Entered alphabet is vowel \n";
		break;
	case 'e':
		cout << "Entered alphabet is vowel \n";
		break;
	case 'E':
		cout << "Entered alphabet is vowel \n";
		break;
	case 'i':
		cout << "Entered alphabet is vowel\n";
		break;
	case 'I':
		cout << "Entered alphabet is vowel \n";
		break;
	case 'o':
		cout << "Entered alphabet is vowel\n ";
		break;
	case 'O':
		cout << "Entered alphabet is vowel\n ";
		break;
	case 'u':
		cout << "Entered alphabet is vowel \n";
		break;
	case 'U':
		cout << "Entered alphabet is vowel \n";
		break;
	default:
		cout << "Entered alphabet is consonant \n";
	}
}