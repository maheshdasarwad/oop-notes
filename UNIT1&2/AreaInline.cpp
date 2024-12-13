#include <iostream>
using namespace std;

//Area of triangle
inline float area(float b, float h)
{
    return 0.5*(b*h);
} 

int main()
{
    float a ,b ;
    cout<<"Enter base and height of the triangle : ";
    cin>>a>>b;
    
    cout<<"Area is : "<<area(a,b);

    return 0;
}