#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter the no. of rows : ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            /*for printing 
            1
            1 2
            1 2 3 ...and so on*/
            cout<<j;

            /*for printing
            1
            2 2
            3 3 3...and so on*/
            cout<<i;

            /*for printing
            2
            3 4
            4 5 6
            5 6 7 8... and so on */
            cout<<i+j;

            
      }
        cout<<"\n";
    }
    return 0;
}