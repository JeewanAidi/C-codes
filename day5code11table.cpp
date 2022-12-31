#include<iostream>
using namespace std;

int main(){
    int i,j;
    cout<<"Enter the number whose table you want : ";
    cin>>i;

    for(j=1;j<11;j++){
        cout<<i<<" * "<<j<<" = "<<i*j<<endl;
    }
    
    return 0;
    
}