#include<iostream>
using namespace std;

class A{
    int x;
    //protected: int x;//easy method to inheritate 
    public:
    void getdata(){
        cout<<"Enter the value of x : ";
        cin>>x;
    }

    // method to inheritate private data
    int getx(){
        return x;
    }
};

class B{
    protected: int y;
    public:
    void input(){
        cout<<"Enter the value of y : ";
        cin>>y;
    }
};

class C : public A , public B{
    int c;
    public: void display(){
        c=getx()+y;
        cout<<"The sum of a and b is : "<<c;
    }
};

int main(){
    C aa;
    aa.getdata();
    aa.input();
    aa.display();
    return 0;
}