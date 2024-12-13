#include <iostream>
using namespace std;

int count = 0;
class A
{ 
    public :
        
        A()
        {
            count++;
            cout<<"\nThe constructor No. "<<count<<" is created";
        }
        ~A()
        {   
            cout<<"\nThe destructor No. "<<count<<" is destroyed";
            count--;
        }
};

int main()
{
    A obj1 , obj2, obj3;

    return 0;
}