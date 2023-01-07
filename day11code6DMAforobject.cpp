#include<iostream>
using namespace std;

class complex{
    float real ,img;
    public: 
    complex(){
        real = 0;
        img = 0;
    }
    complex(float a , float b):real(a),img(b)
    {
    //    [ real = a; img = b; ] is same as [ :real(a),img(b) ]
    }

    void display(){
        cout<<real<<"i + "<<img<<"j"<<endl;
    }
};

int main(){
    int a , b;
    complex *ptr;
    ptr = new complex(5.3 , 3.8);
    ptr->display();
    delete ptr;
    return 0;
}