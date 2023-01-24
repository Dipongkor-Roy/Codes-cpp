/* 1.Question: Write a function named display that can return an integer value.
 Call display function from the main function. Hint: Use return statement. */

#include<iostream>
using namespace std;

int display(int a)
{
    int z=a;
    return z;
}
int main()
{
    int result=display(10);
    cout<<" Number is = "<<result; 
}


