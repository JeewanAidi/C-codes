#include<iostream>
using namespace std;

class DemoPc{
    int l,b;
    public:
    DemoPc(int a , int c){
        l=a;
        b=c;
    }

    void display(){
        cout<<"The area is "<<l*b;
    }
};

int main(){
    int a,b;
    cout<<"Enter the value of a and b : "<<endl;
    cin>>a>>b;   
    DemoPc obj(a,b);
    obj.display();
    return 0;
}