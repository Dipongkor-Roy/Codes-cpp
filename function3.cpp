/* 3.Question: Define two functions to print the maximum and the minimum number
 respectively among three numbers entered by user. */

#include <iostream>
using namespace std;

void maximum(int a ,int b,int c)
{
    if(a>b && b>c){
        cout<<"The maximum number is:"<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"The maximum number is:"<<b<<endl;
    }
     else{
        cout<<"The maximum number is:"<<c<<endl;
    }
}
void minimum(int a,int b,int c)
{  
    if(a<b && a<c){
        cout<<"The minimum number is:"<<a<<endl;
    }
    else if(b<a && b<c){
        cout<<"The minimum number is:"<<b<<endl;
    }
    else{
        cout<<"The minimum number is:"<<c<<endl;
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter Any Three Numbers :"<<endl;
    cin>>a>>b>>c;
    maximum(a,b,c);
    minimum(a,b,c);
}
