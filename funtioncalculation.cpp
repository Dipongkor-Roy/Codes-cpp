
#include <iostream>
using namespace std;
void addition (int,int);
void subtract (int,int);
void multi (int,int);
void division (int,int); //funtion prototype

int main() {
     addition (10,30);
     subtract (10,20);
     multi (10,20); //function calling
     division (2,5);
     
    return 0;
}
void addition (int a,int b)
{ int sum=a+b;
    cout<<"sum ="<<" "<<sum<<endl;
    
}
    void subtract (int a,int b)
{ int result=a-b;
    cout<<"subtract="<<" "<<result<<endl;
    
}
  void multi (int a,int b)
{ int result=a+b;
    cout<<"multi="<<" "<<result<<endl;
}
    void division (int a,int b)
{ float result=(float)a/b; //type casting
    cout<<"Division ="<<" "<<result<<endl;
}