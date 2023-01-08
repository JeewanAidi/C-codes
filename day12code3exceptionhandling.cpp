#include<iostream>
using namespace std;

int main(){
    float a , b , c;
    cout<<"Enter the values of a and b : ";
    cin>>a>>b;

    c=a/b;
    cout<<"division = "<<c;

    // try
    // {
    //     if(b!=0){
    //         c=a/b;
    //         cout<<"Division = "<<c;
    //     }
    //     else {
    //         throw b;
    //     }
    // }
    // catch(float b)
    // {
    //     cout<<endl;
    //     cout<<"Divided by "<<b<<" is not valid because it gives infinity. ";
    //     cout<<endl;
    // }
    return 0;
    
}