#include<iostream>
using namespace std;

class Animal{
    public:
    void display(){
        cout<<"I am a pet animal."<<endl;
    }
};

class Dog: public Animal{
    public:
    void display(){
        Animal::display();
        cout<<"I am a Dog."<<"\n Woow woow!"<<endl;
    }
};

class Cat: public Animal{
    public:
    void display(){
        Animal::display();
        cout<<"I am a Cat."<<"\n Meow Meow!"<<endl;
    }
};

int main(){
    Dog aa;
    cout<<"Dog Class:"<<endl;
    aa.display();
    Cat bb;
    cout<<"Cat Class:"<<endl;
    bb.display();
    return 0;
}