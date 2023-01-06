#include<iostream>
using namespace std;

class person{
    char name[30];
    int age;
    public: 
    void getdata(){
        cout<<"Enter your name and age : ";
        cin>>name>>age;
    }
    void showdata(){
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
    }
};

class exam{
    protected: int m1,m2,m3;
    public:
    void getdata(){
        cout<<"Enter the marks of 1st subject : ";
        cin>>m1;
        cout<<"Enter the marks of 2nd subject : ";
        cin>>m2;
        cout<<"Enter the marks of 3rd subject : ";
        cin>>m3;
    }

    void showdata(){
        cout<<"The mark obtained in 1st subject : "<<m1<<endl;
        cout<<"The mark obtained in 2nd subject : "<<m2<<endl;
        cout<<"The mark obtained in 3rd subject : "<<m3<<endl;
    }

};

class student : public person{
    int studId;
    char stream[10];
    public: void getdata(){
        person::getdata();
        cout<<"Enter your student ID and stream : ";
        cin>>studId>>stream;
    }
    void showdata(){
        person::showdata();
        cout<<"Student ID = "<<studId<<endl;
        cout<<"Stream = "<<stream<<endl;
    }
};

class result: public student , public exam{
    int total;
    public: 
    void getdata(){
        student::getdata();
        exam::getdata();
    }
    void showdata(){
        student::showdata();
        exam::showdata();
        total = m1 + m2 + m3;
        cout<<"Total marks = "<<total<<endl;
        cout<<"Percentage = "<<static_cast<float>(total)/3;
    }
};

int main(){
    result aa;
    aa.getdata();
    cout<<"\n\n\nThe information is as :"<<endl;
    aa.showdata();
    return 0;
}