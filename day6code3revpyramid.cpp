#include<iostream>
using namespace std;

int main(){
    int n,b,i,j;
    cout<<"Enter the no. of rows : ";
    cin>>n;

    /*for printing
        *
       **
      ***
     **** and so on*/
    for(i=1;i<=n;i++){
        for(b=1;b<=n-i;b++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    /*for printing
        1
       12
      123
     1234*/
    for(i=1;i<=n;i++){
         for(b=1;b<=n-i;b++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }

    /*for printing
        2
       34
      456
     5678*/
     for(i=1;i<=n;i++){
         for(b=1;b<=n-i;b++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<i+j;
        }
        cout<<"\n";
    }


    return 0;
}
