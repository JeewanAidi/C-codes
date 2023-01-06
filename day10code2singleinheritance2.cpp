#include<iostream>
using namespace std;

class student {
    protected: 
    char fname[20];
    char lname[15];
    char gender[10];
    int age;

    public:
    void input();
    void display();

};
class jeewan: public student {
    char clz[30];
    char level[20];
    protected: int CGPA;
    public:
    void input2();
    void display2();

    
};

void student :: input(){
    cout<<"Enter the first name of student : ";
    cin>>fname;
    cout<<"Enter the last name of student : ";
    cin>>lname;
    cout<<"Enter the gender of student : ";
    cin>>gender;
    cout<<"Enter the age of student : ";
    cin>>age;
}

void jeewan::input2(){
        cout<<"collage name : ";
        cin>>clz;
        cout<<"Level : ";
        cin>>level;
        cout<<"Enter the CGPA : ";
        cin>>CGPA;
    }

 void jeewan::display2(){
        cout<<"Collage name = "<<clz<<endl;
        cout<<"Level = "<<level<<endl;
        cout<<"CGPA = "<<CGPA<<endl;
    }

void student::display(){
    cout<<"First name = "<<fname<<endl;
    cout<<"Last name = "<<lname<<endl;
    cout<<"Gender = "<<gender<<endl;
    cout<<"Age = "<<age<<endl;

}

int main(){
    jeewan aa;
    aa.input();
    aa.input2();
    aa.display();
    aa.display2();
    return 0;
}
