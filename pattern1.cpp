/* 1
   1 2 
   1 2 3
   1 2 3 4 (column same)
*/

#include<iostream>
using namespace std;
int main(){
 int n,row,col;
 cout<<"Enter The Number of Lines"<<endl;
 cin>>n;

 for(row=1;row<=n;row++){
     for(col=1;col<=row;col++){
         cout<<"  "<<col;
     }
     cout<<endl;
 }
return 0;

}