#include<iostream>
using namespace std;

class area{
	public: 
	int area (int a , int b){
		return (a*b);
	}
	
	float area (float b){
		return (3.14*b*b);
	}
	
	float area (float c){
		return (c*c);
	}
};

int main(){
	int a, b;
	float c ,d;
	area a;
	cout<< "the area of rectangle is : "<< area(a,b);
	cout<< "the area of cylinder is : "<< area(c);
	
	return 0;
}
