/* 3.Question: Write a program to print the area of a rectangle by creating a class named 'Rectangle' using setter and getter method, 
set and get values of its length and breadth and a function named 'returnArea' which re-turns the area of the rectangle. 
Length and breadth of the rectangle are entered through keyboard. You must use private properties and public methods for this class. */

#include<iostream>
using namespace std;
class rectangle
{
private :
    int len;
    int br;
public :
    void setlen(int x)
    {
    len=x;
    }
    int getlen()
    {
        cout<<"Length of rectangle is  :";
        return len;
    }
     void setbr(int y)
    {
    br=y;
    }
    int getbr()
    {
        cout<<"Breadth of rectangle is  :";
        return br;
    }
    int returnArea(int a,int b)
    {
        cout<<"The area of rectangle is :";
        int area=a*b;
        return area;
    }
};
int main()
{
  rectangle ob;
  ob.setlen(10);
  cout<<ob.getlen()<<endl;
  ob.setbr(12);
  cout<<ob.getbr()<<endl;
  cout<<ob.returnArea(10,12);
  
}