#include<iostream>
using namespace std;
char cal_grades(double marks_subject)
{
	char grade;
	if (marks_subject >= 90 && marks_subject <= 100)
		grade = 'A';
	else if (marks_subject >= 80)
		grade = 'B';
	else if (marks_subject >= 70)
		grade = 'C';
	else if (marks_subject >= 60)
		grade = 'D';
	else if (marks_subject >= 50)
		grade = 'E';
	else if (marks_subject > 0 && marks_subject < 50)
		grade = 'F';
	return grade;
}
int main()
{
	double student_marks;
	cout << "Plz enter the marks of a subject in between of 0-100: ";
	cin >> student_marks;
	cout << "Your grade is: ";
	cout << cal_grades(student_marks)<<endl;
}
