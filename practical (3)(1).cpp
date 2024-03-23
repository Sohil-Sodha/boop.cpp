#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
     double km_mt = 1000.0;
     double m_cm = 100.0;
     double cm_ft = 0.0328084;
     double ft_in = 12;
     double km;
     
     cout<< "enter km :";
     cin>> km;
     
     double mt = km * km_mt;
     double cm = mt * m_cm;
     double ft = cm * cm_ft;
     double in = ft * ft_in;
     
    
     cout << setfill('.') << setw(20) << "Distance in meters: " << setprecision(2) << fixed << mt << endl;
     cout << setfill('.') << setw(20) << "Distance in centimeters: " << setprecision(2) << fixed << cm << endl;
     cout << setfill('.') << setw(20) << "Distance in feet: " << setprecision(2) << fixed << ft << endl;
     cout << setfill('.') << setw(20) << "Distance in inches: " << setprecision(2) << fixed << in << endl;
   
     
    return 0;
}
