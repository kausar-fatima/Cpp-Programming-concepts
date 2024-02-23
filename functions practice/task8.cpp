#include<iostream>
using namespace std;

void getScore(float &score)
{   
	cin >> score;
	while (score < 0 || score>100)
	{
		cout << "You have entered invalid score" << endl;
		cout << "Plz re-enter the score: ";
		cin >> score;
	}
}
int findLowest(float score1,float score2,float score3,float score4,float score5)
{
	float min = score1;
	if (min > score2)
		min = score2;
	if (min > score3)
		min = score3;
	if (min > score4)
		min = score4;
	if (min > score5)
		min = score5;
	return min;
}
void calcAverage(float score1,float score2,float score3,float score4,float score5,float min)
{
	float Avg = (score1 + score2 + score3 + score4 + score5 + min) / 4;
	cout << "Average of given scores is: " << Avg;
}
int main()
{
	float score1,
		  score2,
		  score3,
		  score4,
		  score5;
	cout << "Plz enter the 1st score: ";
    getScore(score1);
	cout << "Plz enter the 2nd score: ";
	getScore(score2);
	cout << "Plz enter the 3rd score: ";
	getScore(score3);
	cout << "Plz enter the 4th score: ";
	getScore(score4);
	cout << "Plz enter the 5th score: ";
	getScore(score5);
	float min = findLowest(score1, score2, score3, score4, score5);
	cout << "Lowest number is: "<<min<<endl;
    calcAverage(score1, score2, score3, score4, score4, score5);
}
