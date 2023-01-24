/* 4.Question: A person is eligible to vote if his/her age is greater than or equal to 18.
 Define a function to find out if he/she is eligible to vote. */

#include<iostream>
using namespace std;

void vote(int age){

if((age>=18)){
    cout<<"He/She is eligible for vote"<<endl;
}
    else{
       cout<<"Sorry! He/She is not eligible for vote"<<endl;
    }
}
int main(){
int age;
cout<<"Enter The Age of He/She : ";
cin>>age;
vote(age);
return 0;
}