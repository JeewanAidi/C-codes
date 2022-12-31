#include<iostream>
using namespace std;

int main(){
    // int num , x, y, z;
    // cout<<"Enter the number upto which you want to generate fibonacci series : ";
    // cin>>num;

    // x=0;
    // y=1;
    // z=0;
    // while (z<=num)
    // {
    //     cout<<"\n"<<z;
    //     x=y;
    //     y=z;
    //     z=x+y;
    // }

    //using for loop 
    // x=0;
    // y=1;
    // cout<<"The fibonacci series upto "<<num<<" is as : ";
    // for(z=0;z<=num;z=x+y)
    // {
    //     cout<<"\n"<<z;
    //     x=y;
    //     y=z;

    // }
    // return 0;


    int term , x, y, z, count;
    cout<<"Enter the terms upto which you want to generate fibonacci series : ";
    cin>>term;

    x=0;
    y=1;
    z=0;
    cout<<"The fibonacci series upto "<<term<<" is as : ";
    for(count=0;count<=term;count++)
    {
        cout<<"\n"<<z;
        x=y;
        y=z;
        z=x+y;
    }
    return 0;




    
    
}
