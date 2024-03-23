#include<iostream>
using namespace std;
int main() {
  
    int number;
  
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
           
     cout << number << " is not a prime number." << endl;  
            
     return 0;
    }
      else
   {
    
        cout << number << " is a prime number." << endl;
   }

    return 0;
}
