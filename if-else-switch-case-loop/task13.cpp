#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	const int MIN_NUM = 99,
		MAX_NUM = 999;
	int rand_num1, rand_num2, rand_num_ans, useranswer;
	char op;
	unsigned seed = time(0);
	srand(seed);
	rand_num1 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
	rand_num2 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
	cout << "Select any of the four menus" << endl;
	cout << "\n1. For Addition.Enter            (+) " << " " << endl;
	cout << "2. For Subtraction.Enter         (-)" << " " << endl;
	cout << "3. For Multiplication.Enter      (*) " << " " << endl;
	cout << "4. For Divsion.Enter             (/)" << " " << endl;
	cout << "5. To Quit.Enter                  1    " << " " << endl;
	cout << "\nEnter opration you want to perform" << " ";
	cin >> op;
	while (!(op == '+' || op == '-' || op == '*' || op == '/' || op == '1'))
	{
		cout << "Invalid Input.Please reneter your selection" << endl;
		cout << "Select any of the four menus";
		cout << "1. For Addition.Enter            (+) " << " " << endl;
		cout << "2. For Subtraction.Enter         (-)" << " " << endl;
		cout << "3. For Multiplication.Enter      (*) " << " " << endl;
		cout << "4. For Divsion.Enter             (/)" << " " << endl;
		cout << "5. To Quit.Enter                  1    " << " " << endl;
		cout << "Enter opration you want to perform";
		cin >> op;

	}
	switch (op)
	{
	case('+'):
	{
		rand_num_ans = rand_num1 + rand_num2;
		cout << "   " << rand_num1 << endl;
		cout << "+" << "  " << rand_num2 << endl;
		cout << "-------" << "   " << endl;
		cin >> useranswer;
		if (useranswer == rand_num_ans)
			cout << "CONGRATULATIONS" << endl;
		else
			cout << "Wrong Answer" << ".Correct answer is " << " " << rand_num_ans;
		do {
			cout << "\nSelect any of the four menus" << endl;
			cout << "1. For Addition.Enter            (+) " << " " << endl;
			cout << "2. For Subtraction.Enter         (-)" << " " << endl;
			cout << "3. For Multiplication.Enter      (*) " << " " << endl;
			cout << "4. For Divsion.Enter             (/)" << " " << endl;
			cout << "5. To Quit.Enter                  1    " << " " << endl;
			cout << "Enter opration you want to perform";
			cin >> op;

		} while (op != 1);
	}
	case('-'):
	{
		rand_num_ans = rand_num1 - rand_num2;
		cout << "   " << rand_num1 << endl;
		cout << "-" << "  " << rand_num2 << endl;
		cout << "-------" << "   " << endl;
		cin >> useranswer;
		if (useranswer == rand_num_ans)
			cout << "CONGRATULATIONS" << endl;
		else
			cout << "Wrong Answer" << ".Correct answer is " << " " << rand_num_ans;
		do {
			cout << "\nSelect any of the four menus" << endl;
			cout << "1. For Addition.Enter            (+) " << " " << endl;
			cout << "2. For Subtraction.Enter         (-)" << " " << endl;
			cout << "3. For Multiplication.Enter      (*) " << " " << endl;
			cout << "4. For Divsion.Enter             (/)" << " " << endl;
			cout << "5. To Quit.Enter                  1    " << " " << endl;
			cout << "Enter opration you want to perform";
			cin >> op;

		} while (op != 1);
		break;
	}
	case('*'):
	{
		rand_num_ans = rand_num1 * rand_num2;
		cout << "   " << rand_num1 << endl;
		cout << "x" << "  " << rand_num2 << endl;
		cout << "-------" << "   " << endl;
		cin >> useranswer;
		if (useranswer == rand_num_ans)
			cout << "CONGRATULATIONS" << endl;
		else
			cout << "Wrong Answer" << ".Correct answer is " << " " << rand_num_ans;
		do {
			cout << "\nSelect any of the four menus" << endl;
			cout << "1. For Addition.Enter            (+) " << " " << endl;
			cout << "2. For Subtraction.Enter         (-)" << " " << endl;
			cout << "3. For Multiplication.Enter      (*) " << " " << endl;
			cout << "4. For Divsion.Enter             (/)" << " " << endl;
			cout << "5. To Quit.Enter                  1    " << " " << endl;
			cout << "Enter opration you want to perform";
			cin >> op;

		} while (op != 1);
		break;
	}
	case('/'):
	{
		rand_num_ans = rand_num1 / rand_num2;
		cout << "   " << rand_num1 << endl;
		cout << "/" << "  " << rand_num2 << endl;
		cout << "-------" << "   " << endl;
		cin >> useranswer;
		if (useranswer == rand_num_ans)
			cout << "CONGRATULATIONS" << endl;
		else
			cout << "Wrong Answer" << ".Correct answer is " << " " << rand_num_ans;
		do {
			cout << "\nSelect any of the four menus" << endl;
			cout << "1. For Addition.Enter            (+) " << " " << endl;
			cout << "2. For Subtraction.Enter         (-)" << " " << endl;
			cout << "3. For Multiplication.Enter      (*) " << " " << endl;
			cout << "4. For Divsion.Enter             (/)" << " " << endl;
			cout << "5. To Quit.Enter                  1    " << " " << endl;
			cout << "Enter opration you want to perform";
			cin >> op;

		} while (op != 1);
		break;
	}
	default:
		if (op == '1')
			cout << "\nThe program is ended" << endl;
	}
	return 0;

}
