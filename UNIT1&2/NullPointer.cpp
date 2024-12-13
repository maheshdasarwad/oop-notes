/*
Null Pointer : 
Pointers that are not initialized with a valid address may cause some substantial damage. 
For this reason it is important to initialize them. The standard initialization is to the 
constant NULL.

declaration :: int *ptr = NULL

*/

#include <iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    cout<<"\nThe value of the pointer is : "<<ptr;

    return 0;
}