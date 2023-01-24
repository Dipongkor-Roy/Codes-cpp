/* 1
   2 2 
   3 3 3
   4 4 4 4 (row same)
*/

#include<iostream>
using namespace std;
int main(){
 int n,row,col;
 cout<<"Enter The Number of Lines"<<endl;
 cin>>n;

 for(row=1;row<=n;row++){
     for(col=1;col<=row;col++){
         cout<<"  "<<row;
     }
     cout<<endl;
 }
return 0;
}