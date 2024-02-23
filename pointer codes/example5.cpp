//To swap two numbers
#include <iostream>

using namespace std;
void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int a , b;
    cout<<"Enter two numbers";
    cin >> a >> b;
    swap(&a,&b);
    cout<<a<<"  "<<b;
    return 0;
}