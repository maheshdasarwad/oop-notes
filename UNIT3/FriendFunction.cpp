#include <bits/stdc++.h>
using namespace std;

/*
Friend Functions

1). What is a friend function? What are its merits and demerits? [6]
-->
    Friend Function -->
    It is a non-member function of the class that has access to the private and protected 
    section of the class.
    It is declared inside the class using keyword " friend ".
    
        syntax :   " friend return_type fnt_name( className ); "      <---- declaration
                   " return_type fnt_name( class_Name obj_name) { } " <--- initialization.
                   " fnt_name( obj_name );  "                         <--- calling. 
    
    Merits -->
    1. Can directly access private and protected members of class which is 
        useful for specific cases like operator overloading.
    2. Allows non-member functions to interact with private data
        without making those data public.
    3. Can access members of multiple classes simultaneously,
        enable functionality like operator overloading 
        for multiple classes.
    4. Simplifies implementation of complex operations that requires access 
        to private data of multiple classes.

    Demerits -->
    1. Breaks the principle of encapsulation by allowing access to private 
        data from an external function.
    2. Managing which functions are friends can increase the complexity of the
        class design.
    3. Friendship is not inherited by derived classes 
        limits its application in inheritance.
    4. Creates tight coupling between the class and the function,
        reducing flexibiliy in future modifications.

*/