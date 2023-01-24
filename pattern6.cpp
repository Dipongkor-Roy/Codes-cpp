/* 1 2 3 
   1 2
   1
*/

#include<iostream>
using namespace std;
int main(){
 int n,row,col;
 cout<<"Enter The Number of Lines"<<endl;
 cin>>n;

 for(row=n;row>=1;row--){
     for(col=1; col<=row; col++){
         cout<<" "<<col;
     }
     cout<<endl;
 }
return 0;
}