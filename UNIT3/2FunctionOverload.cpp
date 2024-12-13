#include <bits/stdc++.h>
using namespace std;

/*
    1.) What is function overloading ? Write defination of three overloaded functions (add) 
        which will add two integers, float, and double numbers respectively. [6]
    -->
        Function Overloading ->
        It is the concept of the compile time polymorphism which enables us to use the 
            same name funtion multiple times in different situations within a program.
        
        But these function must have difference in :
                                         1) No. of parameters
                                         2) Type of parameters
                                         3) Order of parameters
*/

class addition
{
    public :
        void add(int a , int b)
        {
            cout<<"\nAddition of two numbers = "<<a + b;
        }

        void add(int a , int b , int c) //No. differ
        {
            cout<<"\nAddition of three numbers = "<<a + b + c;
        }

        void add(int a , float b) //Type differ
        {
            cout<<"\nAddition with float value = "<<a + b;
        }

        void add(float a , int b) //Order differ
        {
            cout<<"\nAddition with float value = "<<a + b;
        }
};

int main()
{
    addition obj;

    obj.add(4,5);
    obj.add(4,5,6);
    obj.add(4,8.9f);
    obj.add(8.9f,7);

    cout<<endl;

    return 0;
}