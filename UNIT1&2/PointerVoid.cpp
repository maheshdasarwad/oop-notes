/*
Void Pointer : The void pointer is the special type of pointer which can store the address of any data type
and can be typecasted in any datatype.

decalaration :-  void (*ptr);
initialization :- int x;
                  void (*ptr) = &x;
*/

#include <iostream>
using namespace std;

int main()
{
    int x = 15;
    void *ptr = &x;
    cout<<"The value of the pointer is : "<<ptr;
}