#include<iostream>
#include<string>

using namespace std;

class Student {
    int roll;
    char name[20];
    float marks;
    public:
    static int count;
    Student(){
        count++;
    }

    void getdata(){
        cout<<"Enter your roll no. , name and marks : "<<endl;
        cin>>roll>>name>>marks;
        
    }
    
    void showdata(){
        cout<<"Roll number = "<<roll<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Marks = "<<marks<<endl;
        cout<<endl;
    }
};
int Student::count;

int main(){
    Student a,b,c;
    a.getdata();
    b.getdata();
    c.getdata();
    

    a.showdata();
    b.showdata();
    c.showdata();

    cout<<"Total Student details given : "<<Student::count<<endl;
    return 0;
}