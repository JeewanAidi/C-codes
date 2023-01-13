#include<iostream>
#include<fstream>

using namespace std;

// The useful classes for working in file are
// 1) fstreambase
// 2) ifstream --> derived from fstreambase
// 3) ofstream --> derived from fstreambase

// In order to work with file in C++ . There are two ways to open the file 
// 1) using the constructor
// 2) using the member function open() of the class

int main(){
    //Opening file using the constructor and writing in it
    string st = "Hii I am Jeewan Aidi";
    // ofstream aa("sample.txt");                //Writing purpose
    // aa << st;

    //opening file using constructor and reading from it
    string st2;
    ifstream aaa("sample.txt");
    // aaa >> st2;  // it doesnot give full string cause it doesn't tread spaces and new line
    getline(aaa,st2);   //Read purpose
    cout << st2;
    return 0;
}

