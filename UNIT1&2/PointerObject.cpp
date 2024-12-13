#include <iostream>
using namespace std;

class A
{
    int a;
    public :
        void setData(int x )
        {
            a = x;
        }
        void display()
        {
            cout<<"\nA = "<<a;
        }
};

int main()
{
    A obj;  
    A (*ptr) = &obj; // decalaration ::--> class_name (*pointerName) = &Object_Name
    ptr -> setData(4);
    ptr -> display();
}