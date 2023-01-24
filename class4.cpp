/* 4.Question: Write a program to print the volume of a box by from a class named Box' use setter and getter method to set and get its 
length,breadth and height. You must use private properties and public methods for this class. */

#include<iostream>
using namespace std;
class Box
{
    private :
    int len;
    int br;
    int height;
    public :
    void setlen(int x)
    {
    len=x;
    }
    int getlen()
    {
        cout<<"Length:";
        return len;
    }
     void setbr(int y)
    {
    br=y;
    }
    int getbr()
    {
        cout<<"Breadth:";
        return br;
    }
         void setheight(int z)
    {
    height=z;
    }
    int getheight()
    {
 cout<<"Height:";
        return height;

    }

    int Vol(int a,int b,int c)
    {
        cout<<"The Volume of The Box is:";
        int volume=a*b*c;
        return volume;
    }
};
    int main()
{
   Box ob;
  ob.setlen(5);
  cout<<ob.getlen()<<endl;
  ob.setbr(7);
  cout<<ob.getbr()<<endl;
  ob.setheight(2);
  cout<<ob.getheight()<<endl;
  cout<<ob.Vol(5,7,2);
 
}











