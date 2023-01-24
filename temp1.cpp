#include <iostream>
using namespace std;
  
int main() {
   
    //Celsius To Fahrenheit

    float celsius,fahren;
    
    cout << "Enter the temperature in celsius\n";
    cin >> celsius;
    fahren =(9/5) * celsius + 32;
    cout << celsius <<"Centigrade is equal to " << fahren <<"Fahrenheit";
      
    return 0;
}