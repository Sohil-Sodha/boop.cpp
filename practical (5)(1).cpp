#include<iostream>
using namespace std;

struct college_info{
    
    string college_name;
    int college_code;
    string department;
    int intake;
};

int main()
{
    college_info s1;

    s1.college_name = "Government Polytechnic Junagadh";
    s1.college_code = 619;
    s1.department = "Computer";
    s1.intake = 67;
    
    
    cout<< "college name :" << s1.college_name <<endl;
    cout<< "college code :" << s1.college_code <<endl;
    cout<< "department :" << s1.department << endl;
    cout<< "intake :" << s1.intake << endl;

    return 0;
}
