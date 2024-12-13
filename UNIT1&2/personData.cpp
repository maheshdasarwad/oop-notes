#include <iostream>
#include <string>
using namespace std;

class person 
{
    string name ;
    int age ;
    string address;

    public :
        person(int a)
        {
            age = a;
        }
        void set()
        {
            cout<<"Enter Your Name : ";
            cin.ignore(); // Clear newline character from the input buffer
            getline(cin , name);

            cout<<"Enter your address : ";
            getline(cin , address);
        }
        void display()
        {
            cout<<"Age = "<<age;
            cout<<"\nName = "<<name;
            cout<<"\nAddress = "<<address;
        }
};

int main()
{
    int a;
    cout<<"Enter your age : ";
    cin>>a;
    person obj(a);
    obj.set();
    obj.display();

    return 0;
}