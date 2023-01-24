#include<iostream>
using namespace std;
int main()
{
    int x; 
    int *value;
    value=&x; 
 cout<<"Enter a number: ";
 cin>>x;
 cout<<" Address: "<<&*value;
 return 0;
 
}
