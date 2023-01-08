//Multipilication of fraction using concept of operator overloading

#include<iostream>
using namespace std;

class fraction{
    int x,y;
    public: 
    fraction():x(0),y(0){}
    void input(){
        cout<<"Enter the numerator : ";
        cin>>x;
        cout<<"Enter the denominator : ";
        cin>>y;
    }

    fraction operator * (const fraction obj){ //declearation operator overloading
        fraction jibu;
        jibu.x = x * obj.x;
        jibu.y = y * obj.y;
        return jibu;
    }

    void display(){
        cout<<"The addition of given two fraction is  "<< x<<" / "<<y;
    }
};

int main(){
    fraction aa, bb, cc;
    aa.input();
    bb.input();
    cc = aa * bb;
    cc.display();
    return 0;
}




