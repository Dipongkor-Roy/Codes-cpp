/* Question: x=5,y=10 swap two numbers */

#include <iostream>
using namespace std;

int main()
{
    int x = 5, y = 10, value;

    cout << "Before swapping." << endl;
    cout << "x = " << x << ", y = " << y << endl;

    value = x;
    x = y;
    y = value;

    cout << "\nAfter swapping." << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}