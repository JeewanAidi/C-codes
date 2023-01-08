#include<iostream>
using namespace std;

class demo{
    int a;
    public: 
    void getdata(){
        cout<<"Enter the values of a : ";
        cin>>a;
    }
    void display(){
        cout<<"Value of a = "<<a<<endl;
    }
    bool operator ==(demo bb){
        if(a==bb.a)
        return true;
        else
        return false;

    }
};

int main(){
    demo aa , bb;
    aa.getdata();
    bb.getdata();
    aa==bb;
    aa.display();
    bb.display();
    if(aa==bb)
    cout<<"Values are equal.";
    else 
    cout<<"Values are not equal.";
}