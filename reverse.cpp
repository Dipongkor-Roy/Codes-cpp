#include<iostream>
using namespace std;
int main()
{
   int n,remainder;
   cout<<"Enter The  Number"<<endl;
   cin>>n;
   int reverse=0;

   while(n!=0){
       remainder=n%10;
       if(remainder%2!=0){
       reverse = reverse*10 + remainder;
       }
       n=n/10;
   }
   cout<<"Reverse Odd Numbers : "<<reverse<<endl;

     return 0;

}