//Memory Managment Operator : new data_type() and delete ptrName
#include <iostream>
using namespace std;

int main()
{
    int *ptr1 = NULL;
    ptr1 = new int(3);

    float (*ptr2) = new float(30.30);

    cout<<"\nValue of Pointer 1 : "<<ptr1; //Value of Pointer 1 : 0x1061420
    cout<<"\nValue of Pointer 2 : "<<ptr2; //Value of Pointer 2 : 0x1061430

    int *ptr3 = new int[3];

    cout<<"\nValue stored in block of memory : ";
    for(int i = 0; i < 3 ; i++)
    {
        ptr3[i] = i;
        cout<<ptr3[i]<<" ";
    }
    cout<<endl;
    //Value stored in block of memory : 0 1 2

    delete ptr1 ; delete ptr2;
    delete [] ptr3;

    return 0;

}