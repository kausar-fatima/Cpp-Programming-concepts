#include<iostream>
#include<string>
using namespace std;

void sortarray(int* scores, int size);
double averagescores(int* scores, int  size);
int main()
{
	int size;
	
	cout << "Plz enter the number of test scores with names: ";
	cin >> size;
	int* scores = new int[size];
    string* name = new name[size];
	
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the name of " << i + 1 << " scored student: ";
		cin >>  *(name + i);
		cout << "Scores for " << i+1 << " person: ";
		cin >> *(scores + i);
		cout << endl;
	}
	sortarray(scores, size);
	cout << "Sorted array is: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(scores + i) << endl;
	}
	cout << "Average of the array is: ";
	cout << averagescores(scores, size);
}
void sortarray(int* scores, int size)
{
	int startindex, minvalue, minindex;
	for (int startindex = 0; startindex < size - 1; startindex++)
	{
		minvalue = scores[startindex];
		minindex = startindex;
		for (int i = startindex + 1; i < size; i++)
		{
			if (scores[startindex] > scores[i])
			{
				minvalue = scores[i];
				minindex = i;
			}
		}
		scores[minindex] = scores[startindex];
		scores[startindex] = minvalue;
	}
}
double averagescores(int* scores, int size)
{
	double average=0,total=0;
	for (int i = 0; i < size; i++)
	{
		total += scores[i];
	}
	average = total / size;
	return average;
}
