#include <iostream>
using namespace std;

class demo
{
    public :

    demo() //invoked on object creation
    {
        cout<<"\nConstructor of demo class.";
    }

    ~demo() //invoked on destruction of object
    {
        cout<<"\nDestructor of demo class.";
    }
};

int main()
{
    try
    {
       demo d; //obj of class consturctor of class get invoked
       throw 10; //destructor of class get invoked
    }
    catch(int x)  //catch integer throw
    {
        cout<<"\nException caught : "<<x<<endl;
    }

    return 0;
}