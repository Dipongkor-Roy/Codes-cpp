#include<iostream>
using namespace std;
int main()
{ 
  #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  int savings;
  cin>>savings;
  
   if(savings>5000) {
   if(savings>10000) {
  cout<<" Road Trip With Neha\n";
  } 
  else 
  { cout<<"Shoppin with Neha\n";}
  }
  else if(savings>2000)
  {
      cout<<"Trip with Reshmi\n";
  } else {
      cout<<"Trip With friends\n";
  }

  

   return 0;


}