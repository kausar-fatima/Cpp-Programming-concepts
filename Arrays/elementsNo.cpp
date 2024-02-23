#include<iostream>
using namespace std;
int main()
{
	char array[] = { 'A','B','C','D','I' };
	int count=0,i=0;
	while(array[i]!='\0')
	{
		count++;
		i++;
	}
	cout << "No. of elements in array are: ";
	cout << count;
}