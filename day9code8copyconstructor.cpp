#include<iostream>
using namespace std;

class DemoPc{
    int length,breadth;
    public:
    DemoPc(int a , int c){
        length=a;
        breadth=c;
    }

    DemoPc(DemoPc &aa){
        length = aa.length;
        breadth = aa.breadth;

    }

    void display(){
        cout<<"The area is "<<length * breadth;
    }
};

int main(){  
    DemoPc A (10 ,20);
    DemoPc B=A;
    A.display();
    cout<<endl;
    B.display();
    }