#include<iostream>
using namespace std;

int main(){
    int num,sum=0,prod=1,digit;
    cout<<"Enter the digit : ";
    cin>>num;

    // using for loop
    /*for(;num>0;num=num/10){
        digit = num%10;
        if(digit%2==0){
            sum =sum + digit;
        }
        else{
            prod = prod*digit;
        }
    }*/

    //using while loop
    while (num>0)
    {
        digit = num%10;
        if(digit%2==0){
            sum =sum + digit;
        }
        else{
            prod = prod*digit;
        }
        num=num/10;
    }
    

    cout<<"The sum of even number is : "<<sum<<endl;
    cout<<"The product of odd number is : "<<prod;
    
    return 0;
}