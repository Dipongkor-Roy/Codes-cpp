/* Question: Write a program in C++ to store n elements in an array and print 
the elements using pointer. */

#include <iostream>
using namespace std;

int main()
{
   int arr[5];
   cout << "Enter any 5 elements: ";

   for(int i = 0; i < 5; ++i) {
   
     cin >> arr[i]; 
     }
     
   cout << "You entered: ";
   
   for(int i = 0; i < 5; ++i){
      cout << endl << *(arr + i); 
      }
   
   return 0;
}