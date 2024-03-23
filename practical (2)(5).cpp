#include <iostream>
using namespace std;
int s = 20;

int main() {
    
    int s = 10;
    
    cout << "Local variable x: " << s << endl;

    cout << "Global variable x: " << ::s << endl;

    return 0;
}
