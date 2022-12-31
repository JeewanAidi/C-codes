#include<iostream>
using namespace std;

int main(){
    int num, prod=1;
    // int sum=0;
    cout<<"Enter the two or more digit number : ";
    cin>>num;

    // while (num>0)
    // {
    //     sum = sum + num%10;
    //     num=num/10;
    // }

    // for(;num>0;num=num/10){
    //     sum=sum+num%10;
    // }
    // cout<<"The sum of its digits is : "<<sum<<endl;

    for(;num>0;num=num/10){
        prod=prod*(num%10);
    }
    cout<<"The product of its digits is : "<<prod;
    return 0;
}