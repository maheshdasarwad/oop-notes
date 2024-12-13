#include <iostream>
#include <exception>
#include <cmath>
using namespace std;

class NegativeHandle : public exception
{
    public :
        
        const char* what() throw()
        {
            return " Negative Number ";
        }
};

class MathHandler
{
    private :
        double value;
        double num;
    public :
        MathHandler(double num)
        {
            this -> num = num;
            if(num < 0)
            {
                throw NegativeHandle();
            }
            value = sqrt(num);
            cout<<"Square root of "<<num<<" = "<<value<<endl;
        }

        ~MathHandler()
        {
            try
            {
                cout<<"\nDestrucor called for number : "<<num<<endl;
                if(num == 0)
                {
                    throw runtime_error(" Simulated Exception in destructor. ");
                }
            }
            catch(const exception &e)
            {
                cerr<<"\nException in destructor : "<<e.what()<<endl;
            }
            
        }
};

int main()
{
    int num;
    cout<<"Enter a number to find square root : ";
    cin>>num;

    try
    {
        MathHandler obj(num);
    }
    catch(NegativeHandle &e)
    {
        cerr<<"\nException caught : "<<e.what()<<endl;
    }
    catch(const exception &e)
    {
        cerr<<"Caught standard exception : "<<e.what()<<endl;
    }
}
