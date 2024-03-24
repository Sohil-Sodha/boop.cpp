#include<iostream>
using namespace std;

class convert {

public:

double cm;

double cm_mt(){
     return cm * 0.01; 
}
double cm_km(){
     return cm * 0.00001;
}
double cm_ft(){
     return cm * 0.0328;
}
double cm_in(){
     return cm * 0.3937;
}

};

int main()
{ 
    convert v1;

    double a,b,c,d;

    cout << "Enter Value in centimetre: " << endl;
    cin >> v1.cm;

    a = v1.cm_mt();
    b = v1.cm_km();
    c = v1.cm_ft();
    d = v1.cm_in();

    cout << "CM to Meter is: " << a << endl;
    cout << "CM to Kilometre is: " << b << endl;
    cout << "CM to Feet is: " << c << endl;
    cout << "CM to Inches is: " << d << endl;

    return 0;
}
