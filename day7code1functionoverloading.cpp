#include<iostream>
using namespace std;

float area (int l , float b ){
    return l*b;
}

float area (float a){
    return 3.14*a*a;
}
 
int area (int k){
    return k*k;
}

int area (int b , int h){
    return 0.50*b*h;
}

int main(){
    int a,b,c,d;
    float f,g;
    cout<<"Enter the values of all : ";
    cin>>a>>b>>c>>d>>f>>g;
    cout<<"The area of rectangle is "<<area(a,f)<<endl;
    cout<<"The area of circle is "<<area(g)<<endl;
    cout<<"The area of square is "<<area(b)<<endl;
    cout<<"The area of triangle is "<<area(c,d);
    return 0;

}