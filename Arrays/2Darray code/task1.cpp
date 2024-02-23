#include<iostream>
using namespace std;
int main()
{
	int array[3][3] = { 1,2,3,4,5,6,7,8,9 };
	cout << "Here I am displaying address of elements in array through row: " << endl;
	cout << *array << "  " << array << "  " << &array << endl;
	cout << &array << "  " << &array[0] + 1 << "  " << &array[0] + 2 << endl;


	cout << "Here I am displaying elements in array: " << endl;
	cout << "First Method: " << endl;
	cout << **array << "  " << *(*array + 1) << "  " << *(*array + 2) << endl;
	cout << *(*(array + 1) + 0) << "  " << * (*(array + 1) + 1) <<"  "<< * (*(array + 1) + 2) << endl;
	cout << *(*(array + 2) + 0) << "  " << *(*(array + 2) + 1) << "  " << *(*(array + 2) + 2) << endl;


	cout << "Second Method: " << endl;
	cout << *array[0] << "  " << *(array[0] + 1) << "  " << *(array[0] + 2) << endl;
	cout << *array[1] << "  " << *(array[1] + 1) << "  " << *(array[1] + 2) << endl;
	cout << *array[2] << "  " << *(array[2] + 1) << "  " << *(array[2] + 2) << endl;


	cout << "Third Method: " << endl;
	cout << array[0][0] << "  " << array[0][1] << "  " << array[0][2] << endl;
	cout << array[1][0] << "  " << array[1][1] << "  " << array[1][2] << endl;
	cout << array[2][0] << "  " << array[2][1] << "  " << array[2][2] << endl;


	cout << "Here I am displaying addresses of elements in array: " << endl;
	cout << "First Method: " << endl;
	cout << *array << "  " << *array + 1 << "  " << array + 2 << endl;
	cout << *(array + 1) << "  " << *(array + 1) + 1 << "  " << *(array + 1) + 2 << endl;
	cout << *(array + 2) << "  " << *(array + 2) + 1 << "  " << *(array + 2) + 2 << endl;


	cout << "Second Method: " << endl;
	cout << array << "  " << array[0] + 1 << "  " << array[0] + 2 << endl;
	cout << array[1] << "  " << array[1] + 1 << "  " << array[1] + 2 << endl;
	cout << array[2] << "  " << array[2] + 1 << "  " << array[2] + 2 << endl;


	cout << "Third Method: " << endl;
	cout << &array[0][0] << "  " << &array[0][1]<<"  "<<&array[0][2] << endl;
	cout << &array[1][0] << "  " << &array[1][1] << "  " << &array[1][2] << endl;
	cout << &array[2][0] << "  " << &array[2][1] << "  " << &array[2][2] << endl;
	
	return 0;
}