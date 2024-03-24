#include <iostream>
using namespace std;

inline int mult(int x, int y) {
    return x*y;
}

int main() {
    int num1, num2;
  
    cout << "Enter a first number: " << endl;
    cin >> num1;
  
    cout << "Enter a second number: " << endl;
    cin >> num2;

    int result = mult(num1, num2);
    cout << "multiplication is: " << result << endl;

    return 0;
}
