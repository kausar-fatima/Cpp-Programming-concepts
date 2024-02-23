#include<iostream>
using namespace std;
int summ(int* arr) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *(arr + i);
    }
    return sum;
}
int main() {
    int sum = 0, fac = 1;

    int array[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter the number:";
        cin >> array[i];
    }
    sum = summ(array);
    cout << "\nThe sum is :" << sum << endl;
    for (int i = 0; i < 5; i++) {
        fac = fac * *(array + i);
    }
    cout << "\nFactorial is : " << fac;
    return 0;
}