#include <iostream>
#include <string>
using namespace std;

string max(string x, string y) {
    return (x > y) ? x : y;
}

string max(string x, string y, string z) {
    return max(max(x, y), z);
}

int main() {
    string str1, str2, str3;
    cout << "Enter three strings: ";
    cin >> str1 >> str2 >> str3;

    cout << "maximum string is: " << max(str1, str2, str3) << endl;

    return 0;
}
