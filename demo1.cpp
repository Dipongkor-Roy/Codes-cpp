#include <iostream>
2. using namespace std;
3. int main() {    
4.    int n1 =101, n2=99, n3=100;
5.
6.    if(n1 >= n2 && n1 >= n3) 
7.        cout << "Largest number: " << "n1";
8.
9.    else if(n2 >= n1 && n2 >= n3)
10.        cout << "Largest number: " << "n2";
11.    
12.   else
13.        cout << "Largest number: " << "n3";
14.  
15.    return 0;
16. }