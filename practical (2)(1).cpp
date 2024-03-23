#include <iostream>
using namespace std;

int main(){
  
  double number1 ;
  double number2 ;

    
    cout<<"Enter value of first number ";
    cin>>number1 ;
  
    cout<<"Enter value of second number ";
    cin>>number2;
    
    double addition = number1 + number2 ;
    cout << "addition of num1 and num2 is "<< addition <<endl;
  
    double substraction = number1 - number2 ;
    cout << "substraction of num1 and num2 is " << substraction << endl;
    
    double multiplication = number1 * number2 ;
    cout << "multiplication of num1 and num2 is " << multiplication << endl;
  
    double division = number1 / number2 ;
    cout << "division of num1 and num2 is " << division << endl;

return 0;
}
