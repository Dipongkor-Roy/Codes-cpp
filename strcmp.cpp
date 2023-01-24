#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    char number1[ ]="Dipu";
     
    char number2[ ]="dipu";
    int value=strcmp(number1,number2);
     
     if(value==0){
         cout<<"Matched"<<value<<endl;
     }else{
         cout<<"Not Matched"<<value<<endl;
     }
    
    return 0;
}
