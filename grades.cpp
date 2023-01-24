#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter Your Mark"<<endl;
    cin>>mark;

    if(mark>100){
        cout<<"Error"<<endl;
    }else if(mark<0){
        cout<<"Error"<<endl;
    }else if(mark>=90){
        cout<<"Grade: A+ and Point:4.00"<<endl;
    }else if(mark>=85){
        cout<<"Grade: A and Point:3.75"<<endl;
    }else if(mark>=80){
        cout<<"Grade: B+ and Point:3.50"<<endl;
    }else if(mark>=75){
        cout<<"Grade: B and Point:3.25"<<endl;
    }else if(mark>=70){
        cout<<"Grade: C+ and Point:3.00"<<endl;         
    }else if(mark>=65){
        cout<<"Grade: C and Point:2.75"<<endl;
    }else if(mark>=60){
        cout<<"Grade: D+ and Point:2.50"<<endl;
    }else if(mark>=50){
        cout<<"Grade: D and Point:2.25"<<endl;
    }else{
        cout<<"Grade: F and Point:0.00 Fail"<<endl;    
    }

    return 0;

}


