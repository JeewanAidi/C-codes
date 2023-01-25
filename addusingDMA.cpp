#include <iostream>
using namespace std;

int main(){
    int *pa , *pb  ,*psum;
    pa = new int;
    pb = new int;
    psum = new int;

    cout<<"Enter two integers : ";
    cin>>*pa>>*pb;

    *psum = *pa + *pb;

    cout<<"Sum = "<<*psum;
    delete pa;
    delete pb;
    delete psum;

    return 0;
}