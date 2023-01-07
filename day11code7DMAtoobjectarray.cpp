#include<iostream>
using namespace std;

class election {
    static int count; //used static data to allocate equal memory for multiple datas
    long int citizen_no;
    char name[20];
    char address[30];
    public: void getdata(){
        cout<<"Enter Candidate Details : ";
        cin>>citizen_no>>name>>address;
        count++;
    }
    void showdata(){
        cout<<"Citizenship Number = "<<citizen_no<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Address = "<<address<<endl;
        cout<<"\n";
    }
    static void total_record(){
        cout<<"Total record found = "<<count<<endl;
    }

};
int election::count=0;

int main(){
    char ch;
    int a, i;
    election *ptr;
    cout<<"How many records to enter : ";
    cin>>a;
    ptr= new election[a]; //to allocate memory for multiple people
    for(i=0; i<a; i++)
    ptr->getdata(); //to call getdata
    election::total_record(); //we can't call static data directly so use scoperesolution operator(::)
    for(i=0; i<a; i++)
    ptr->showdata();
    delete[] ptr;
    return 0;


}