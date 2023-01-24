/* Question 1 : Below there is an Array of positive and negative number.
Write a program that calculates how many of the numbers are positive and how many of them are negative. Hint: Use ARRAY.
A[ ]={10,-2,9,-4,-6,-7,12,14,19,-20} */


#include<iostream>
using namespace std;
int main()
{
    int A[ ]={10,-2,9,-4,-6,-7,12,14,19,-20};
    int pos=0, neg=0;
    
    for(int i=0; i<10; i++)
    {
        if(A[i]>0)
            pos++;
        else
            neg++;
    }
    cout<<" Positive Numbers: "<<pos<<endl;
    cout<<" Negative Numbers: "<<neg<<endl;
    cout<<endl;
    return 0;
}