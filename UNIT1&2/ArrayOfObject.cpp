#include <iostream>
using namespace std;

int count = 0;
class A 
{
    int a ; 

    public :
        void setData()
        {
            count++;
            cout<<"Enter number "<< count <<" : ";
            cin>>a;
        }
        void display()
        {
            cout<<a<<" ";
        }
};

int main()
{
    A object[4];

    for(int i = 0 ; i < 4 ; i++)
    {
        object[i].setData();
    }
   
   cout<<"\nThe elements of array : ";
   for(int i = 0 ; i < 4 ; i++)
   {
        object[i].display();
   }

}