#include <iostream>
using namespace std;
class Person
{
public:
    void pub()
    {
        cout << "Inside The Person class" << endl<<endl;
    }
    Person()
    {
        cout << "Hellow" << endl;
    }
    ~Person()
    {
        cout << "Thank you" << endl;
    }
};

class Employee : virtual public Person
{
public:
    void pub();
    void emp()
    {
        cout << "Inside The Employee class" << endl<<endl;
    }
};
class Faculty : public Employee
{
    public:
    void fac()
    {
        emp();
       
       
        cout << "Inside The Faculty class" << endl<<endl;
    }
};
class Officer : public Employee
{
    public:
    void off()
    {
        emp();
        cout << "Inside The Officer class" << endl<<endl;
    }
};

class Student : virtual public Person
{
    public:
    void pub();
    void stu()
    {
        cout << "Inside The Student class" << endl<<endl;
    }
};

class Scholarship_Student : public Student

{
    public:
    void sch()
    {
        stu();
        cout << "Inside The Scholarship Student class" << endl<<endl;
    }
};
class TA : public Employee, public Student
{
    public:
    void ta()
    {
        cout << "Finally, Inside The TA class" << endl<<endl;
    }
};
int main()
{
    Person a1;
    a1.pub();

    Employee b1;
    b1.emp();

    Faculty a2;
    a2.fac();

    Officer b2;
    b2.off();

    Student s1;
    s1.stu();

    Scholarship_Student c1;
    c1.sch();

    TA t1;
    t1.ta();
}
