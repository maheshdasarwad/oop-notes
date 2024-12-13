#include <iostream>
using namespace std;

class A
{
    int a;
    public :
        void setdata(int a)
        {
            this -> a = a;
        }
        void display()
        {
            cout<<"\n A = "<<a;
        }
};

int main()
{
    A object;
    object.setdata(25);
    object.display();
}