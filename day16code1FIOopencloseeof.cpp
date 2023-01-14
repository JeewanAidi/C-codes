#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    // This is the method using  member function open() of the class
    ofstream aa;
    aa.open("sample.txt");        //opening and writing mode
    aa<<"I am Jeewan Aidi. ";
    aa<<"I am a pogrammer!\n";
    aa<<"I am Ironman. ";
    aa<<"Love you 3000!!!\n";
    aa<<"Bring me Thanos!\n";
    aa.close();

    ifstream obj;
    string jibu;
    obj.open("sample.txt");
    obj>>jibu;
    cout<<jibu;
    // while(obj.eof() == 0){
    //     getline(obj,jibu);
    //     cout<<jibu<<endl;
    // }


    return 0;
}