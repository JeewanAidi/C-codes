#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // connecting our file with jibu stream
    ofstream jibu("sample.txt");
    // content entered by user in writing mode
    cout<<"Enter the content: "<<endl;
    char content[100];
    cin.getline(content,100);

    jibu<<content;
    //closing tag to use both writing and reading mode in same program
    jibu.close();

    // reading mode 
    ifstream jibuu("sample.txt");
    string contents;
    jibuu>>contents;
    cout<<"The content in sample.txt is : "<<content;

    jibuu.close();
    return 0;

}