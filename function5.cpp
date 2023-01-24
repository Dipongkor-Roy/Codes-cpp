/* 5.Question: Write a program that performs summation.
The program will use 3 integers, a and b (obtained by the user) and takes a third,
pass by reference parameter.The function that adds the numbers should be void, 
then puts the sum in that. */

#include <iostream>
using namespace std;

void sumofnumbers (int num1, int num2, int *refeValue)
{
    int sum = num1 + num2 + *refeValue;
    cout<<"The total sum is : "<<sum;
}

int main()
{
    int a, b, refeValue;

    refeValue = 10 ;
    cout<<"Enter The First Number : ";
    cin>>a;
    cout<<"Enter The Second Number : ";
    cin>>b;

    sumofnumbers(a, b, &refeValue);

}
