/* Question 2 : Write a program that can print the assigned values of the character array given below (Use loop):
 char Name[]={'M','a','s','h','r','a','f','e'}; */


#include<iostream>
using namespace std;
int main()
{
    char name[]={'M','a','s','h','r','a','f','e','\0'};
    
    
    for(int i=0; i<8; i++)
    {
        cout<<name[i]<<"="<<i<<endl;
    }
    
    cout<<endl;
    return 0;
}