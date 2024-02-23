#include<iostream>
using namespace std;

void main() {

	int num;
	cout << "Enter number of student: ";
	cin >> num;
	float* point;
	//To allocate memory
	point = new float[num];
	for (int i = 0; i < num; i++)
	{
		cout << "CGPA of " << i + 1 << " Student: ";
		cin >> *(point + i);
		cout << endl;
	}
	//To de-allocate memory
	delete[] point;
}