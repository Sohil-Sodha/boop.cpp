#include <iostream>
using namespace std;

double area_Circle(double r, double pi = 3.14) {
    return pi * r * r;
}

int main() {
    double radius;
  
    cout << "Enter the radius: " << endl;
    cin >> radius;

    double area = area_Circle(r);
  
    cout << " area of the circle is: " << area << endl;

    return 0;
}
