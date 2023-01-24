/* 2.Question:Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively 
by creating two objects of the class 'Student'. You must use private properties and public methods for this class. */

#include<iostream>
using namespace std;
class student
{
private :
    string n1;
    string n2;
    string n3;
public :
    int roll_number;
    int mobile_number;
    int address;
    void setn1(string a)
    {
      n1=a;
    }
    string getn1()
    {
        return n1;
    }
    void display1 ()
    {
        cout<<"Sam's Roll number is: ";
        cout<<roll_number<<endl;
        cout<<"Sam's Mobile number is: ";
        cout<<mobile_number<<endl;
        cout<<"Sam's Address is :";
        cout<<address<<endl;
    }
     void setn2(string b)
    {
      n2=b;
    }
    string getn2()
    {
        return n2;
    }
    void display2 ()
    {
        cout<<"John's Roll number is: ";
        cout<<roll_number<<endl;
        cout<<"John's Mobile number is: ";
        cout<<mobile_number<<endl;
        cout<<"John's Address is :";
        cout<<address<<endl;
    }
};
int main()
{
    student s1,s2;
    s1.setn1("Details:");
    cout<<s1.getn1()<<endl;
    s1.roll_number=2030;
    s1.mobile_number=21212121;
    s1.address=202;
    s1.display1();

    s2.setn2("Details:");
    cout<<s2.getn2()<<endl;
    s2.roll_number=2031;
    s2.mobile_number=23232323;
    s2.address=203;
    s2.display2();
    
}