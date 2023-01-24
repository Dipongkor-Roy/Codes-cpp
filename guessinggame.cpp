// Guessing Game (1-5)
#include <iostream>
#include <cstdlib> //header file for "rand" fuction
using namespace std;

int main() {
  
  
   while(1){ //while 1 mean condition true.run it again and again.
      
       int guessnumber,randomnumber;
   cout<<"\nPlease input any Guess Number:"<<endl;
   cin>>guessnumber;

   randomnumber= 1+rand()%5; //its starts from 0 for this reason +1

   if(guessnumber==randomnumber){
       cout<<"You Won.Congo"<<endl<<endl;
   }else {
       cout<<"Sorry, You lose.Try again"<<endl;
       cout<<"Random Number was ="<<randomnumber;
   }
       
   }
    return 0;
}