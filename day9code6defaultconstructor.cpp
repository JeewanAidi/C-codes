#include<iostream>
using namespace std;

class def{
    int x,y;
    public: 
    def(){
        x=10;
        y=20;
    }
    void display(){
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y;
    }
};

int main(){
    def dc;
    dc.display();
    return 0;
}