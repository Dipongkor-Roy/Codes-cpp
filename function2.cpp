/* 2.Question: Use FUNCTIONS to find the areas of different geometrical figures.
This has 4 options that can be chosen by the user. The 4 options are –
a) Area of a circle
b) Area of a rectangle
c) Area of a triangle
d) Area of a square
After choosing, the geometric figure user will give corresponding inputs (For example in
Circle user have to give the Radius).*/

#include<iostream>
using namespace std;

void circle(float);
void retraingle(int,int);
void triangle(float,float);
void square(float);

int main(){
   
int n;
cout<<" -*- Menu -*- "<<endl;

cout<<"\n1.Area of circle"<<endl;
cout<<"2.Area of rectangle"<<endl;
cout<<"3.Area of triangle"<<endl;
cout<<"4.Area of square"<<endl;

cout<<"\nEnter Your choice: ";
cin>>n;
if(n==1)
{
    int a;
    cout<<"The area of circle"<<endl;
    cout<<"Please Enter the radius of the circle: "<<endl;
    cin>>a;
circle(a);
}
else if(n==2)
{
    int w,h;
    cout<<"The area of retraingle"<<endl;
    cout<<"Please Enter the value of wedth and hight: "<<endl;
    cin>>w;
    cin>>h;
retraingle(w,h);
}
else if(n==3)
{
    float q,e;
    cout<<"The area of traingle"<<endl;
    cout<<"Please Enter the value of wedth and hight: "<<endl;
    cin>>q;
    cin>>e;
triangle(q,e);
}
else{

    float len;
    cout<<"The are of square is: "<<endl;
    cout<<"Please Enter a length: "<<endl;
    cin>>len;
    square(len);
}
}

    void circle(float a) 
    {
    float result=(float)3.1416*a*a;
    cout<<"The area of circle is: "<<result<<endl;
    }
void retraingle(int w,int h)
{
int result=w*h;
cout<<"The area of retraingle is: "<<result<<endl;

}
void triangle(float q,float e )
{
float result= 0.5*q*e;
cout<<"The area of traingle is: "<<result<<endl;

}
 void square(float len)
    {
    float result=len*len;
    cout<<"The area of square is: "<<result<<endl;
    }