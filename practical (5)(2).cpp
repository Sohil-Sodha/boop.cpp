#include<iostream>
using namespace std;

class Employ {

public:
    int employe_num;
    string employe_name;
    int basic_salary;
    double DA;
    int IT;
    double net_salary;
};

int main()
{
    Employ m1;
    cout << "Enter Employee number: " << endl;
    cin >> m1.employe_num ;
    cout << "Enter Employee name: " << endl;
    cin >> m1.employe_name;
    cout << "Enter Basic salary: " << endl;
    cin >> m1.basic_salary;
    cout << "Enter DA: " << endl;
    cin >> m1.DA;
    cout << "Enter Icome tex: " << endl;
    cin >> m1.IT;
    cout << "Enter Net salary: " << endl;
    cin >> m1.net_salary;
    
    cout << "Employee numbert: " <<m1.employe_num << endl;
    cout << "Employee name:" <<m1.employe_name << endl;
    cout << "Basic salary:" <<m1.basic_salary << endl;
    cout << "DA: " <<m1.DA << endl;
    cout << "income tex: " <<m1.IT << endl;
    cout << "Net salary: " <<m1.net_salary << endl;

    return 0;
}
