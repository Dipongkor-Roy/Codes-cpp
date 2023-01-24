#include <iostream>
using namespace std;
class person
{
   private:
   string Name;
   int age;
   public:
   void setName(string a){
       Name = a;
   }
   string getName(){
       return Name;
   }
   void setAge(int b){
       age = b;
   }
   int getAge(){
       return age;
   }
};
class student: public person
{ private:
  float cgpa;
  public:
  void setCgpa(float c){
      cgpa=c;
  }
   float getCgpa(){
       return cgpa;
   }
};
class teacher: public person
{ private:
  int salary;
  public:
  void setSalary(int d){
      salary=d;
  }
   int getSalary(){
    return salary;
   }
};
int main()
{
    student a;
    teacher b;
    a.setName("Dipu");
    a.setAge(21);
    a.setCgpa(3.95);
    cout<<a.getName()<<" "<<a.getAge()<<" "<<a.getCgpa();
    cout<<endl;
     
    b.setName("Rifat");
    b.setAge(25);
    b.setSalary(5000);
    cout<<b.getName()<<" "<<b.getAge()<<" "<<b.getSalary();
    cout<<endl;
      
}
