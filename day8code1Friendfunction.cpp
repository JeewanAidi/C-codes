#include<iostream>
using namespace std;

class B;
class A
{
    int x;
    public: void input(){
        cout<<"Enter value of x : ";
        cin>>x;
    } 
    friend void max (A,B);
};

class B
{
    int y;
    public: void input(){
        cout<<"Enter values of y :";
        cin>>y;
    }
    friend void max (A,B);
};

void max (A a , B b){
    if(a.x >= b.y){
        cout<<"A is the greatest.";
    }
    else{
        cout<<"B is the greatest.";
    }
}

int main(){
    A a;
    B b;
    a.input();
    b.input();
    max(a,b);
    return 0;
}