/* Question: Write a program in C++ to compute 
the sum of all elements in an array using pointers. */

#include<iostream>
using namespace std;

int main() {

    int arr[5],sum=0;
    int *ptr;
    
    cout << "Enter any 5 numbers:";
    for (int i=0; i<5; i++) {
        cin >> arr[i];
    }
    ptr = arr;
    for (int i=0; i<5; i++) {
        sum = sum + *(ptr + i);
    }
    cout << "Sum of array elements:" <<sum<<endl;

    return 0;
}