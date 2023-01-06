#include<iostream>
using namespace std;

class base{
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

class der: public base{
    int y;
    public:
    void input(){
        cout<<"Enter the value of y : ";
        cin>>y;
    }

    void display(){
        //cout<<"Addition = "x+y; //direct method by making data protected
        cout<<"Addition = "<<getx()+y;
    }
};

int main(){
    der aa;
    aa.getdata();
    aa.input();
    aa.display();
    return 0;
}