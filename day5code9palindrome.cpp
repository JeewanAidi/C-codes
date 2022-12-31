#include<iostream>
using namespace std;

int main(){
    int num , rev=0 ,org;
    cout<<"Enter the digit which you want to know either it is palindrome or not : ";
    cin>>num;
    org = num;

    //using for loop
    // for(;num>0;num=num/10){
    //     rev = (rev*10)+num%10;
    // }

    //using while loop
    while (num>0)
    {
        rev = (rev*10)+num%10;
        num=num/10;
    }
    
    if(org==rev){
        cout<<"The digit you given("<<org<<") is palindrome.";
    }
    else
    cout<<"The digit you given("<<org<<") is not palindrome.";

    return 0;
}