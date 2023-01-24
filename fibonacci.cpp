#include <iostream>  
using namespace std;  
int main() {  
  int n1=0,n2=1,next,i,number;    
 cout<<"Enter the number of Elements: ";    
 cin>>number;
 cout<<n1<<" "<<n2<<" " ;    
 for(i=2;i<number;++i) {    
  next=n1+n2;    
  cout<<next<<" ";  
  n1=n2;    
  n2=next;    
 }    
   return 0;  
   }  