#include<iostream>
using namespace std;

int main(){
    int a , fact=1;
    cout<<"Enter the number whose you want the factorial value : ";
    cin>>a;

    if(a==0){
        cout<<"factorial is 1";
    }

    else if(a<0){
        cout<<"Factorial doesn't exist";
    }

    else{for(;a>=1;a--){
        fact = fact*a;
    }
    }
    cout<<"The factorial of "<<a<< " is "<<fact;
    return 0;
}