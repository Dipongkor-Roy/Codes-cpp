///*Question: A program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'.
You must use private properties and public methods for this class. The output should be as follows:
Name        Year of joining        Address
Robert        1994        64C- WallsStreat
Sam        2000        68D- WallsStreat
John        1999        26B- WallsStreat */


#include<iostream>
using namespace std;
class Employee
{
private :
    string a1;
    string a2;
    string a3;
public :
    string name;
    int year_of_joining;
    string adress;
    void seta1(string x)
    {
        a1=x;
    }
    string geta1()
    {
        return a1;
    }
     void seta2(string y)
    {
        a2=y;
    }
    string geta2()
    {
        return a2;
    }
      void seta3(string z)
    {
        a3=z;
    }
    string geta3()
    {
        return a3;
    }
void dispaly()
{
    cout<<name<<"      "<<year_of_joining<<"      "<<adress<<endl;

}
void setvalue(string b,int c,string d)
{
    name=b;
    year_of_joining=c;
    adress=d;
}

};
int main()
{
 Employee obj1,obj2,obj3,obj4;
 obj1.seta1("Name");
 cout<<obj1.geta1();
 obj1.seta2("Year of joining");
 cout<<"      "<<obj1.geta2();
 obj1.seta3("Adress");
 cout<<"      "<<obj1.geta3()<<endl;
 obj2.setvalue("Robert",1994,"64C- WallsStreat");
 obj2.dispaly();
 obj3.setvalue("Sam",2000,"68D- WallsStreat");
 obj3.dispaly();
 obj4.setvalue("John",1999,"26B- WallsStreat");
 obj4.dispaly();

}
