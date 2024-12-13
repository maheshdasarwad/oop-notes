#include <iostream>
using namespace std;

class A
{
    
    public :
        void swap( float a , float b )
        {
            float temp = a;
            a = b;
            b = temp;

             cout<<"\nAfter Swaping : "<<a<<" "<<b;
        }

        void swap(char a , char b )
        {
            char temp = a;
            a = b;
            b = temp;

            cout<<"\nAfter Swaping : "<<a<<" "<<b;
        }
};

int main() 
{
    A object;
    object.swap(8.9f , 9.7f);
    object.swap('e' , 'f');

    return 0;
}