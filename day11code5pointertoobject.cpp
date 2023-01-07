#include<iostream>
using namespace std;

class BCE{
    char name[20];
    int roll , marks;
    public: void getdata(){
        cout<<"Enter your name , roll no. , marks : ";
        cin>>name>>roll>>marks;
    }
    void showdata(){
        cout<<"The data are as : "<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Roll No. = "<<roll<<endl;
        cout<<"Marks Obtained = "<<marks;
    }
};

int main(){
    BCE *ptr;
    BCE aa;
    ptr = &aa;
    ptr->getdata();
    ptr->showdata();
    return 0;
}