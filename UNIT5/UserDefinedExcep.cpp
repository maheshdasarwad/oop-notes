#include <iostream>
#include <exception> 
using namespace std;

class divByZeroExcep : public exception
{
    public :

        const char* what() const throw()
        {
            return "\nDivision by zero is not allowed";
        }
};

double divide(float numerator , float denominator)
{

    if(denominator == 0)
    {
        throw divByZeroExcep();
    }

    return numerator / denominator ;
};

int main()
{
    float num1 , num2 ;
    cout<<"\nEnter Numerator and Denominator : ";
    cin>>num1>>num2;

    try{
        float result = divide(num1 , num2);
        cout<<"Result : "<<result<<endl;
    } catch( divByZeroExcep &e)
    {
        cout<<e.what()<<endl;
    }

    cout<<"\nProgram execution successfull.....";
    return 0;
}
        
            