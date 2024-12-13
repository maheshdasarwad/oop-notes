#include <iostream>
#include <string>
using namespace std;

class Student 
{
    string name;
    int roll ;
    int marks;

    public :
        void set()
        {
            cout<<"Enter Your Name : ";
            getline(cin , name);
            cout<<"Enter the roll No. : ";
            cin>>roll;
            cout<<"Enter your Marks : ";
            cin>>marks;
        }
        void display()
        {
            cout<<"\nName : "<<name;
            cout<<"\nRoll No : "<<roll;
            cout<<"\nMarks : "<<marks;
        }


};

int main ()
{
    Student Object;
    Object.set();
    Object.display();

    return 0;
}