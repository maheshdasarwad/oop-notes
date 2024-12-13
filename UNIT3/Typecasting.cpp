#include <iostream>
using namespace std;

/*
Type Casting
1). Explain type casting. Discuss implicit and explicit type conversion with examples. [6]

    Type casting :
        It is nothing but the new way of converting a data type of one variable to 
        some other datetype.
    
    Type Casting type :
    1) Implicit typecasting :
            Done by the compiler.
            No loss of information.
            Converts from smaller to larger type.
            Ex -
                Let x is 8bit
                    y is 16bit
                Now to perform (x + y) the compiler typecasts x 8bit to 16bit
                and then add with the y.

    2) Explicit typecasting :
            Done by the programmer.
            Loss of information.
            Uses parenthesis with the type and less safe.
            Ex -
                float x = 3.424;
                int y = (int)x;

    Important cases --->
        case 1 : int a = 10 , b = 3
                 float c = a/b;   Output -> 3
                 in this int divides int

        case 2 : int a = 10 , b = 3
                 float c = (float)a/b;  Output -> 3.33
                 in this bracket float considered and typecasts a and b divide to float.
        
        case 3 : int a = 10 , b = 3
                 float c = (float)(a/b);  Output -> 3
                 in this two brackets have same priority and starts from right 
                    so a/b as int then makes float.
    
*/

int main() {

    // 'a' is implicitly converted to float
    int a = 10;      
    float b = 5.5;   
    float result = a + b;  
    cout << "Result: " << result << endl;

    // Explicit type conversion
    double pi = 3.14159;
    int approxPi = (int)pi; 
    cout << "Value of pi: " << pi << endl;
    cout << "Approximated value: " << approxPi << endl;

    return 0;
}

