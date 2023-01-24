// 1+3+5+........n

#include <iostream>

using namespace std;

int main() {
    int n, s=0  ;

    cout << "Enter a Number ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        s = s+i;
    }

    cout << "Sum = " << s;
    
   return 0;
 

}