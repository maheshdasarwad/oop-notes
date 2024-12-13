#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *ptr = arr; //arr points the base address or address of the first element of array.

    cout<<"\nAccessing using pointer : ";
    for(int i = 0 ; i < 6 ; i++)
    {
        cout<<*(ptr + i)<<" ";
    }

    return 0;
}