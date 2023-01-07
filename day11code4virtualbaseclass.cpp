#include<iostream>
using namespace std;

class A{
    public:
    // void show(){
    //     cout<<"\n Base Class ";
    // }

    virtual void show(){
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
    // B aa;         this is method overrridding 
    // aa.show();    It is the concept of early binding
   A *bptr;        //Pointer is only created in base class.
//    A aa;           // When we made pointer of base class and then we are able to make the object of base class too.
   B aa; 

/*(twist here when we made pointer of base class but object of derived class , it calls the function of base class thats why concept of virtual arrives when we add virtual keyword before function we are able to make pointer of base class and object of derived class and gets the output on the basis of object we assigned)*/

// it is also the concept of late binding and runtime polymorphism
//If a compiler does not know at compile-time which functions to call up until the run-time, it is called late binding.
// /Early binding is also called static binding. Early binding occurs when we make the explicit or direct function call in our program.


   bptr=&aa;
   bptr->show();
}