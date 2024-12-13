#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 5, 6, 7};

    int *(ptr) = arr;

    cout<<"\nAccessing array using array : ";
    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<*(ptr + i)<<" ";
    }
    cout<<endl;

}