#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter the number  : ";
    cin >> n;
    if (n >= 0)
        cout << n << " is a positive number.";
    else 
        cout << n<< " is a negative number.";
    return 0;
}