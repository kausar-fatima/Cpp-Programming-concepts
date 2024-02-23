#include<iostream>
//#include<cmath>

using namespace std;
void coinToss(int);
int main()
{
	int num, rand_num = 0;
	cout << "Plz enter the number of times for tossing of a coin: ";
	cin >> num;
	cout << "We are going to toss the coin for " << num << " times" << endl;
	for (int i = 1; i <= num; i++)
	{
		cout << "Toss for " << i << " time is: ";
		coinToss(rand_num);
		cout << endl;
	}
	return 0;
}
void coinToss(int rand_num)
{
	const int MAX_NUM = 2,
		MIN_NUM = 1;
	unsigned seed = time(0);

	srand(seed);
	rand_num = (rand() % MAX_NUM - MIN_NUM + 1) + MIN_NUM;
	cout << rand_num;
}