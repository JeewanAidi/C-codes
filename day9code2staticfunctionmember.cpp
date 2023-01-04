#include<iostream>
using namespace std;

class BCE{
    int code;
    static int count;
    public:
    void setcode(){
        count++;
        code = count;
    }

    void showcode(){
        cout<<"Student Code = "<<code<<"BCE/2078"<<endl;
    }

    static void showcount(){
        cout<<"Record of "<<count<<" Student found"<<endl;
    }
};

int BCE::count;

int main(){
    BCE s1;
    s1.setcode();
    BCE::showcount();
    s1.showcode();
    BCE s2;
    s2.setcode();
    BCE::showcount();
    s2.showcode();
    BCE s3;
    s3.setcode();
    BCE::showcount();
    s3.showcode();
    BCE s4;
    s4.setcode();
    BCE::showcount();
    s4.showcode();

    return 0;
}