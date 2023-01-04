#include<iostream>
using namespace std;

class Student{
    int roll;
    char name[29];
    public:
    void give(){
        cout<<"Enter your roll and name :";
        cin>>roll>>name;
    }
    void print(){
        cout<<"Name = "<<name<<"\nRoll No. = "<<roll<<endl;
    }

    class data{
        int day , month , year;
        public: void getdata();
        void showdata();
    };
};

void Student::data::getdata(){
    cout<<"Enter your born day , month , year : ";
    cin>>day>>month>>year;
}


void Student::data::showdata(){
    cout<<"Date of birth = "<<day<<"/"<<month<<"/"<<year;
}

int main(){
    Student Jeewan;
    Student::data d1;
    cout<<"The data of given student is : " <<endl;
    Jeewan.give();
    d1.getdata();
    Jeewan.print();
    d1.showdata();
    return 0;
}
