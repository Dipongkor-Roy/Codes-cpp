#include<iostream>
#include<iomanip> //Header File For 'setprecision'
using namespace std;
int main()
{
   float low1,low2;
   int n;
   cout<<"Number Of Sudents : "<<endl;
   cin>>n;
   float array[n];
   for(int i=0;i<n;i++){
       cin>>array[i];
   }
    if (array[0]<array[1]){
        low1=array[0];
        low2=array[1];
    }
     else{
         low1=array[1];
         low2=array[0];
    }
     for(int i=2;i<n;i++){
         if(array[i] < low1){
            low2=low1;
            low1=array[i];
        }
        else if (array[i]<low2){
            low2=array[i];
        }
    }
    cout<<showpoint;
    cout<<fixed;
    
    cout<<setprecision(1);
    cout<<"First Lower Mark is : "<<(float)low1<<endl;
    cout<<"Second Lower Mark is : "<<(float)low2<<endl;
    
    return 0;
    
    
}