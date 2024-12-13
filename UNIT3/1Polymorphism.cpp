#include <bits/stdc++.h>
using namespace std;

/*
Polymorphism -------->

1). What is polymorphism? Explain the types of polymorphism in C++. [5]
-->
    Polymorphism is the important feature of the OOP which simply implies one name multiple forms.
    Refers to an operation exibiting different behaviour in different instances.

    There are two types of polymorphism :-
    1. Compile-time polymorphism
    2. Runtime polymorphism

    1. Compile-time polymorphism ---->
        It is a static polymorphism.
        Object is bound to the function call at the time of compilation.
        Resolved during the program compilation.
        Achieved through :
            i.)  Function overloading.
            ii.) Constructor overloading.
            iii.) Operator overloading.
        Also called as early binding
    
    2. Runtime polymorphism ---->
        It is a dynamic polymorphism.
        Object is bound to the function call at the time of execution.
        Resolved during the program execution.
        Achieved through :
            i.) Virtual Function.
        Also called as late binding.
*/

/*
2). Explain the polymorphism feature of OOP. What are the different ways to achieve it in C++.
    Explain them along with examples.
--->
    The polymorphism feature of OOP :
    - Ability to take more than one form.
    - Exhibit different behavior with different instances.

    Ways to achive the polymorphism :
    1 . Compile-time Polymorphism(Static Binding)
    2 . Runtime-time Polymorphism(Dynamic Binding)

    Compile-time example --
       Using Function overload

        class calculator
        {
            public :
                int add( int a , int b)
                {
                    return a + b;
                }

                int add(int a, int b, int c)
                {
                    return a + b + c;
                }
        };

        int main()
        {
            calculator obj;
            cout<< obj.add(2,4) <<endl;
            cout<< obj.add(4,5,8) <<endl;

            return 0;
        }

    Runtime polymorphism
        using virtual function
    
        class A 
        {
            public :
                virtual void display()
                {
                    cout<<"\nIn class A.";
                }
        };

        class B : public A
        {
            public :
                void display()
                {
                    cout<<"\nIn class B";
                }
        };

        class C : public A
        {
            public :
                void display()
                {
                    cout<<"\nIn class C";
                }
        };

        int main()
        {
            A *aa;
            B bb;  C cc;
            aa = &bb;
            aa -> display(); //In class B
            aa = &cc;
            aa -> display(); //In class C

            return 0;
        }
*/

/*
3). Differentiate between compile-time polymorphism and run-time polymorphism. [5]
--> 
    COMPILE-TIME 
        1. Resolved at compile time.
        2. Achieved through function or operator overloading.
        3. Provides fast execution as binding is early.
        4. It is less flexible as all things execute at compile time.
        5. No virtual keyword needed.
        6. No pointer or reference required.
        7. Example : Function overloading.

    RUN-TIME
        1. Resolved at run time.
        2. Achieved through virtual function.
        3. Provides slow execution as binding is late.
        4. It is more flexible as all things execute at run time.
        5. Requires virtual keyword needed.
        6. Requires base class pointer or reference.
        7. Example : Function overriding
*/

/*

4). What is runtime polymorphism? How it is achieved in C++? 
    Explain it along with an example. [5]
-->
    Runtime Polymorphism :
        The polymorphism in which the object is bound to the function call 
            at time of execution.
        Hence also called as the late binding.
        Provides slow execution and is more flexible as all things execute at run time.

    It is achieved through virtual function and inheritance.
    Use "virtual" keyword in base class function.
    Override the function in derived class.

    Ex -
    
        class shape 
        {
            public :
                virtual void draw()
                {
                    cout<<"\nDrawing a shape -->";
                }
        };

        class circle : public shape
        {
            public :
                void draw()
                {
                    shape::draw();
                    cout<<"\nCircle."<<endl;
                }
        };

        class triangle : public shape
        {
            public :
                void draw()
                {
                    shape::draw();
                    cout<<"\nTriangle."<<endl;
                }
        };

        int main()
        {
            shape *obj1;
            circle cc; triangle tt;
        
            obj1 = &cc;
            obj1 -> draw(); //output -> Drawing a circle

            obj1 = &tt;
            obj1 -> draw(); //Output -> Drawing a trinagle

            return 0;
        }

*/