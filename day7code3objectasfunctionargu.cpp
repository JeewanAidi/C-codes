// Program to add two times

#include<iostream>
using namespace std;
class Time{
	private:
		int hour;
		int minute;
	public:
		//constructor for initializing objects
		//this constructor uses default arguments
		Time(int h = 0, int m = 0){
			hour = h;
			minute = m;
		}
		Time add(Time t){
			Time temp;
			temp.minute = minute + t.minute;
			temp.hour = hour + t.hour;
			if(temp.minute >= 60){
				temp.hour++;
				temp.minute -= 60;
			}
			return temp;
		}
		// function to display time
		void display(){
			cout<<hour<<" hr "<<minute<<" min"<<endl;
		}
};

int main(){
	Time t1(2,56), t2(3,14), t3;
	t3 = t1.add(t2);
    t1.display();
    t2.display();
	t3.display();
	return 0;
}