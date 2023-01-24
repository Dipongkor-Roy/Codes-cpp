#include <iostream>
using namespace std;
int main()
{
    int n1, n2, gcd;
    cout << " Input the first number: ";
    cin >> n1;
    cout << " Input the second number: ";
    cin >> n2;

    for (int i=1; i<=n1 && i<=n2; i++) 
    {
        if (n1%i == 0 && n2%i == 0) 
        {
            gcd = i;
        }
    }
    cout << " The Greatest Common Divisor is: " << gcd << endl;
    return 0;
}