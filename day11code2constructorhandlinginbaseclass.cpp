#include<iostream>
using namespace std;

class base{
    protected: int a;
    public: base(int x){
        a=x;
    }
    void display(){
        cout<<"\n A = "<<a;
    }
};

class derived1{
     protected: int b;
    public: derived1(int y){
        b = y;
    }
    void display(){
        cout<<"\n B = "<<b;
    }
};

class derived2:public base , public derived1{
    int c;
    public: derived2(int p , int q ,int r):base(p),derived1(q){
        c=r;
    }
    void dislay(){
        derived1::display();
        cout<<"\n C = "<<c;
    }
};

int main(){
    int p ,q ,r;
    cout<<"Enter the values of p,q,r : ";
    cin>>p>>q>>r;
    derived2 aa(p,q,r);
    aa.base::display();
    aa.dislay();
    return 0;
}
