#include <iostream>
using namespace std;

class Calculator
{
    float a , b;
    public :
        void setData(int x , int y)
        {
            a = x;
            b = y;
        }
        void addition()
        {
            cout<<"\nAddition is : "<<a+b;
        }
        void substraction( )
        {
            cout<<"\nSubstraction is : "<<a-b;
        }
        void multiplication()
        {
            cout<<"\nMultiplication is : "<<a*b;
        }
        void division()
        {
            cout<<"\nDivision is : "<<a/b;
        }
};

int main() 
{
    Calculator Object;
    Object.setData(9,5);
    Object.addition();
    Object.substraction();
    Object.multiplication();
    Object.division();

    return 0;

}