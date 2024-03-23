#include <iostream>
using namespace std;

int main() {
    int rows;
    int num = 1;

    cout << " enter number of row : " << endl;
    cin >> rows; 
    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        
        
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        
        cout << endl;
    }
    
    return 0;
}
