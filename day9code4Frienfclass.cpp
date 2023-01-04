#include<iostream>
using namespace std;

class B;
class A{
    int x,y;
    public: void get(){
        cout<<"Enter the values of x and y :";
        cin>>x>>y;
    }
    friend class B;
};

class B{
    public: void display(A a){
        cout<<"x = "<<a.x<<endl;
        cout<<"y = "<<a.y<<endl;
    }
};

int main(){
    A aa;
    B bb;
    aa.get();
    bb.display(aa);
    return 0;
}