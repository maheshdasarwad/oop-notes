#include <iostream>
using namespace std;

void add(int a , int b)
{
    cout<<"\nAddition is : "<<a+b;
}

void multiply(float a , float b)
{
    cout<<"\nMultiplication is : "<<a*b;
}

int main()
{
    void (*ptr)(int , int); //declaration
    void (*ptr2)(float , float); //declaration
    
    ptr = add; //refrencing
    ptr2 = multiply; //refrencing

    ptr(2,3); //derefrencing
    ptr2(2,4); //derefrencing
    
    return 0;
}
