/* 1.Question: Create a class named 'Student' with a string property 'name' and an integer property 'id'. Use public as access modifiers for the properties and methods.
Assign the value of id as '2222' and that of name as "John" by creating an object of the class Student. */

#include <iostream>
using namespace std;

class student {
    public:
    string name=" ";
    int id;
};
int main()
{ 
    student John;
    John.id= 2222;

    cout<<"John id="<<John.id<<endl; 

  return 0;
}
