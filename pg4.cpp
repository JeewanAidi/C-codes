#include<iostream>

using namespace std;

int main()
{
    int i;
    //first method
    int marks[4]= {27,83,97,47};
    cout<<marks[0]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[2]<<endl;

    //using for loop
    for (int i = 0; i < 4; i++)
    {
        cout<<"The marks of "<<i<< "is"<<marks[i]<<endl;
    }

    //using while loop
      

    //using do-while loop
    // i=0;
    // do
    // {
    //    cout<<"The marks of "<<i<< "is"<<marks[i]<<endl;
    //    i++;
    // } while (i!=4);
    

    
    
    return 0;
}