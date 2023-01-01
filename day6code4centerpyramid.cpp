#include<iostream>
using namespace std;

int main(){
    int n,b,i,j;
    cout<<"Enter the no. of rows : ";
    cin>>n;

    /*for printing
        *
       ***
      *****
     ******* and so on*/
    for(i=1;i<=n;i++){
        for(b=1;b<=n-i;b++){
            cout<<" ";
        }
        for(j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
