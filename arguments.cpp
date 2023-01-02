#include<iostream>
using namespace std;

//float interest(int mymoney, float rate=1.06){
//    return mymoney*rate;
//}

float interest(const int mymoney, const float rate=1.06){
	return mymoney*rate;
}

int main(){
	
//	//default argument
//    int money=1000;
//    cout<<"I have "<<money<< " $ and i get "<<interest(money)<<" $ after adding interest rate."<<endl;
//    cout<<"I have "<<money<< " $ and i get "<<interest(money, 1.10)<<" $ after adding interest rate.";
//    
    
    int money=1000;
    cout<<"I have "<<money<< " $ and i get "<<interest(money)<<" $ after adding interest rate."<<endl;
    cout<<"I have "<<money<< " $ and i get "<<interest(money, 1.10)<<" $ after adding interest rate.";
}
