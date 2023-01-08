#include<iostream>
using namespace std;

class demo{
    int eng;
    int math;
    public: 
    demo(int e , int m){
        eng=e;
        math=m;
    }
    void input(){
        cout<<"Enter the marks of english and mathmatics : ";
        cin>>eng>>math;
    }
    void operator = (const demo& aa){
        eng = aa.eng;
        math = aa.math;
    }

    void display(){
        cout<<"Marks in English = "<<eng<<endl;
        cout<<"Marks in Mathmatics = "<<math<<endl;
    }

};

int main(){
    // int a,b;
    // demo aa(a,b), bb(a,b);
    // aa.input();
    // bb.input();

    demo aa(39,43),bb(24,97);
    aa=bb;
    cout<<"Marks obtained by 1st student : "<<endl;
    aa.display();
    cout<<endl;
    cout<<"Marks obtained by 2nd student : "<<endl;
    bb.display();
    return 0;

}