/* Question: Find an even number that divides by 2 so that the quotient
is also an even number */

#include <iostream>
using namespace std;
int main()
{

    cout << "Input An Even Number To check The condition Ful-Fill or Not : " << endl;
    int w;
    cin >> w;
    if (w % 4 == 0)
    {
        if (w % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}