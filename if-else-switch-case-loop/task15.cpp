#include<iostream>
using namespace std;
double getscores(double);
void calcAverage(double, double, double, double);
int findlowest(double, double, double, double);
int main()
{
	double score = 0;
	cout << "PLz enter the scores of students: " << endl;
	cout << "Scores of 1st student are: ";
	double score1 = getscores(score);
	cout << "PLz enter the scores of students: " << endl;
	cout << "Scores of 2nd student are: ";
	double score2 = getscores(score);
	cout << "PLz enter the scores of students: " << endl;
	cout << "Scores of 3rd student are: ";
	double score3 = getscores(score);
	cout << "PLz enter the scores of students: " << endl;
	cout << "Scores of 4th student are: ";
	double score4 = getscores(score);
	cout << "PLz enter the scores of students: " << endl;
	cout << "Scores of 5th student are: ";
	double score5 = getscores(score);
	findlowest(score1, score2, score3, score4);
}
double getscores(double score)
{
	while (!(cin >> score) || 0 > score > 100)
	{
		cout << "PLz enter the scores within 0 and 100: ";
		cin >> score;
	}
	return score;
}
//void calcAverage(double score1, double score2, double score3, double score4,double score5)
//{
//
//}
int findlowest(double score1, double score2, double score3, double score4, double score5)
{
	int min;
	if (score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5)
		min = score1;
	if (score2 > score1 && score2 > score3 && score2 > score4 && score2 > score5)
		min = score2;
	if (score3 > score1 && score3 > score2 && score3 > score4 && score3 > score5)
		min = score3;
	if (score4 > score1 && score4 > score2 && score4 > score3 && score4 > score5)
		min = score4;
}