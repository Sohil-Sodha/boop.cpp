#include<iostream>
using namespace std;

int max(int i, int j) {
    return (i > j) ? i : j;
}

int max(int i, int j, int k) {
    return max(max(i, j), k);
}

int main() {
    int num1, num2, num3;
    cout << "Enter a three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << " maximum number is: " << max(num1, num2, num3) << endl;
    return 0;
}
