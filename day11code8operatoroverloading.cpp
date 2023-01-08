//to add to complex number using concept of operator overloading

#include<iostream>
using namespace std;

class complex{
    float real , img;
    public:
    complex(): real(0),img(0){}
    void getdata(){
        cout<<"Enter the real part and imaginary part : "<<endl;
        cin>>real>>img;
    }
    complex operator - (const complex& obj){
        complex jibu;
        jibu.real = real - obj.real;
        jibu.img = img - obj.img;
        return jibu;
    }
    void display(){
        cout<<real<<" + "<<img<<"i";
    }
};

int main(){
    complex aa, bb, cc;
    aa.getdata();
    bb.getdata();
    cc = aa - bb;
    cc.display();
    return 0;
}