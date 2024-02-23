//To find smallest number
#include <iostream>
using namespace std;

int checkSmallest(int* p, int size) {
    int smallest = *p;

    for (int i = 1; i < size; i++) {
        if (*(p + i) < smallest) {
            smallest = *(p + i);
        }
    }

    return smallest;
}

int main() {
    int array[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter the number: ";
        cin >> array[i];
    }
    cout << "Smallest is: " << checkSmallest(array, 5);
    return 0;
}
