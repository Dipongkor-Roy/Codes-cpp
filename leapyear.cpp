#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0  && year % 100 != 0 ){

        cout<<"This year is leap";

    } else if (year % 400 == 0){

        cout<<"This year is leap year";
    } else {

        cosut<<"This year isn't leap year";

    }

    return 0;
}