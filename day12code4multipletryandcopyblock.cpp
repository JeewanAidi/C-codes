#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;

    try
    {
        if(x==0)
            throw x;
        if (x==100)
            throw "e";
        if (x==1000)
            throw(5.4F);
    }
    // catch(int x){
    //     cout<<"value of x = "<<x;
    // }
    // catch(char x){
    //     cout<<"value of x is a char "<<x;
    // }
    // catch(float x){
    //     cout<<"value of x is float "<<x;
    // }

    catch(...){
        cout<<"Error occured";
    }
}