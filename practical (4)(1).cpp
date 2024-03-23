#include <iostream>
using namespace std;

void sort(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int num1;
    int num2;

    cout<<"enter first number :";
    cin>>num1;

    cout<<"enter second number :";
    cin>>num2;

    cout << "Before sortinging: " << endl;
    cout << num1 << " " << num2 << endl;

    sort(num1, num2);

    cout<< "After sortinging : " << endl;
    cout << num1 << " " << num2 << endl;

    return 0;
}
