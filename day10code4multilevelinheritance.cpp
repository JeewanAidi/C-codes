#include<iostream>
using namespace std;

class student{
    char name[20];
    int studId;
    public: 
    void getdata(){
        cout<<"Enter the name and student Id : ";
        cin>>name>>studId;
    }

    void showdata(){
        cout<<"Name = "<<name<<endl;
        cout<<"Student ID = "<<studId<<endl;
    }
};

class employee: public student{
    char org_name[30];
    int emp_id;
    public:
    void getdata(){
        student::getdata();
        cout<<"Enter the organization name and employee ID : ";
        cin>>org_name>>emp_id;
    }

    void showdata(){
        student::showdata();
        cout<<"Organization name = "<<org_name<<endl;
        cout<<"Employee ID = "<<emp_id<<endl;
    }
};

class marketting_dep: public employee{
    int working_hours;
    public:
    void getdata(){
        employee::getdata();
        cout<<"Enter the working horurs per day : ";
        cin>>working_hours;
    }

    void showdata(){
        employee::showdata();
        cout<<"Working Hours = "<<working_hours<<endl;
    }
};

int main(){
    marketting_dep aa;
    cout<<"All details required : "<<endl;
    aa.getdata();
    cout<<"All data provided : "<<endl;
    aa.showdata();
    return 0;
}
