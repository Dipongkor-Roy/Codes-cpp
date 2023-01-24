/* Question: x=5,y=10 Swap two numbers using Pointers */

#include<iostream>
using namespace std;

int main() {

    int x=5, y=10, value;
    int *a, *b;

    cout << "Before Swap"<<endl;
    cout<<"x="<<x<<" "<<"y="<<y<<endl;

    a = &x;
    b = &y;

    value = *a;
    *a = *b;
    *b = value;

    cout << "After Swap" <<endl;
    cout << "x="<<x<<" "<<"y="<<y<<endl;

    return 0;
}
