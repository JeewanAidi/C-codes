#include<iostream>
using namespace std;

int main(){
    int x, y ,i, prod=1;
    cout<<"Enter the values of x and y : ";
    cin>>x>>y;

    for(i=1;i<=y;i++)
    prod = prod * x;

    cout<<"The value of "<<x<<" raised to power "<<y<<" is "<<prod;
    return 0;
}