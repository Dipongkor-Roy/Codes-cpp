/* C C C
   B B 
   A
*/

#include<iostream>
using namespace std;
int main(){
 int n,row,col;
 cout<<"Enter The Number of Lines"<<endl;
 cin>>n;

 for(row=n;row>=1;row--){
     for(col=1; col<=row; col++){
         cout<<((char) (row+64));
     }
     cout<<endl;
 }
return 0;
}
   