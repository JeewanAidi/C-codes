#include<iostream>
using namespace std;

class mango;
class apple{
    int x;
    public: 
    void enter(){
        cin>>x;
    }
    void show(){
        cout<<"values of x before swapping : "<<x<<endl;
    }
    void swap(mango &);
};

class mango{
    int y;
    public: 
    void enter(){
        cin>>y;
    }
    void show(){
        cout<<"values of y before swapping : "<<y<<endl;
    }
    friend void apple:: swap(mango &);
};

void apple::swap(mango &aa){
    int temp = x;
    x = aa.y;
    aa.y = temp;
}

int main(){
    apple aa;
    aa.enter();
    mango bb;
    bb.enter();
    cout<<"values before swapping : "<<endl;
    aa.show();
    bb.show();
    cout<<"values after swapping : "<<endl;
    aa.swap(bb);
    aa.show();
    bb.show();
    return 0;
}


