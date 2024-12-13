#include <iostream>
using namespace std;

void check(int num) throw(int , const char*)
{
    if(num == 1)
    {
        throw 100; //throw integer
    }
    else if(num == 2)
    {
        throw("\nstring exception."); //throw string
    }
    else
    {
        cout<<"\nNo exception thrown !"<<endl;
    }
}

int main()
{
    int num ;
    cout<<"\nEnter a number : ";
    cin>>num;

    try
    {
        check(num);
    } catch(int e) {
        cout<<"\nCaught an interger exception : "<<e<<endl;
    } catch(const char *e){
        cout<<"\nCaught a string exception : "<<e<<endl;
    }

    cout<<"\nProgram execution successfull...";
    return 0;
}