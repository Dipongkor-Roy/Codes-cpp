// 2+4+8+.........n

#include <iostream>

using namespace std;

int main() {
    int n, s=0  ;

    cout << "Enter a Number ";
    cin >> n;

    for (int i = 0; i <= n; i=i+1) {
        s = s+i;
    }

    cout << "Sum = " << s;
    
   return 0;
}
