#include <iostream>
using namespace std;
class complex{
    private:
    int real,imag;
    public:
    complex(int r=0,int i=0){
        real=r;
        imag=i;
    }
    void print(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    
    //operator overloading
    complex operator+(complex c){
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }

};

int main() 
{
    complex c1(2,4);
    complex c2(5,2);
    complex c3(3,6);
    complex c4;
    c4=c1+c2+c3; //c1.add(c2+c3)
    c4.print();
    return 0;
}