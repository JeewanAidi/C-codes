// If the compiler knows at the compile-time which function is called, it is called early binding. 
// /Early binding is also called static binding. Early binding occurs when we make the explicit or direct function call in our program.
//By default early binding happens in C++. Late binding (discussed below) is achieved with the help of virtual keyword)



#include<iostream>
using namespace std;

class A{
    public:
    void show(){
        cout<<"\n Base Class ";
    }
};

class B:public A{
    public:
    void show(){
        cout<<"\n Derived Class ";
    }
};

int main(){
    B aa;
    aa.A::show();
    aa.show();
    return 0;
}