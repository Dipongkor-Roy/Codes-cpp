#include <iostream>
using namespace std ;

class student
{  public:
    int id;
    double cgpa;
};

int main()
{
    student Alim;
    Alim.id=100;
    Alim.cgpa= 3.44;
    
    cout<<"Alim's Id ="<<Alim.id<<" "<<"Alim's Cgpa="<<Alim.cgpa<<endl;
    return 0;
}