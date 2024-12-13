#include <iostream>
using namespace std;


void validateNo(int num)
{
    try
    {
        if( num <= 0)
        {
            throw("\nInvalid Account Number.");
        }
        else
        {
            cout<<"\nAccount validation successful."<<endl;
        }
    } catch(...) {
        cout<<"\nError in validation..!";
        throw; //rethrowing the same exception.
    }
    
}

void transaction( int num)
{
    try{
        validateNo(num); //call the funtion that might throw
    } catch(...){
        cout<<"\nErrror In Transaction..!";
        throw;
    }
}


int main()
{
    int num;
    cout<<"\nEnter account number : ";
    cin>>num;

    try
    {
        transaction(num); //call the outer function.
    } catch(...) {
        cout<<"\nTransaction Failed..!";
    }

    cout<<"\nExecuted Successfully..."<<endl;

    return 0;
}