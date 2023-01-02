#include<iostream>
using namespace std;

int main(){
    //add two number using DMA for single data
    int *pa , *pb, *psum;
    pa = new int;
    pb = new int;
    psum = new int;
    
    cout<<"Enter the numbers : ";
    cin>>*pa>>*pb;

    *psum = *pa + *pb;
    cout<<"sum = "<<*psum;

    delete pa;
    delete pb;
    delete psum;
    return 0;

}