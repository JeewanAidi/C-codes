//Increment/Decrement using concept of operator overloading

#include<iostream>
using namespace std;

class increment{
    int a ,b;
    public:
    increment():a(0),b(0){}
    void getdata(){
        cout<<"Enter the values of a and b : ";
        cin>>a>>b;
    }
    
// void operator ++(int){ // for post argument 
    void operator ++(){
        a=a+1;
        b=b+1;
    }

    void display(){
        cout<<"Incremented value of a = "<<a<<endl;
        cout<<"Decremented value of b = "<<b;
    }
};

int main(){
    increment aa;
    aa.getdata();
    // bb.getdata();
    ++aa;
    // aa++; for post fix you need to give int as argument
    aa.display();
    // bb.display();
    return 0;
}

