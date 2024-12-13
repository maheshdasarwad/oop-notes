#include <iostream>
using namespace std;

/*
Scope Resolution Operator

    -> It is a operator used to define scope of variable and functions.
    -> Denoted by double colon ( :: ).
    -> Helps to resolve naming conflicts between different scopes.

    Main Uses :
    1. Accessign Global Variables.
    2. Definig Member Functions Outside Class.
    3. Accessing Static Members.
    4. Accessing Base Class Members.
*/

/*
Write a program in C++ to demonstrate the use of the scope resolution operator. [6]

        class A
        {
            protected :
                int a;
            public :
                void input()
                {
                    cout<<"\nEnter a : ";
                    cin>>a;
                }
                void display1();
        };

        void A :: display1()
        {
            cout<<"\nA = "<<a;
        }

        class B 
        {
            protected :
                int b;
            public :
                void input()
                {
                    cout<<"Enter b : ";
                    cin>>b;  
                }
                void display2();
        };

        void B :: display2()
        {
            cout<<"\nB = "<<b;
        }

        class C : public A , public B
        {
            int c;
            public :
                void input()
                {
                    cout<<"Enter c : ";
                    cin>>c;
                    // A :: input(); //Reduce the ambiguity
                    // B :: input(); //Reduce the ambiguity
                }
                void display3()
                {
                    cout<<"\nC = "<<c;
                    cout<<"\nAddition is : "<<a + b + c;
                }
        };

        int main()
        {
            C cc;
            
            cc.A :: input();
            cc.B :: input();
            cc.input();

            cc.display1();
            cc.display2();
            cc.display3();

            return 0;
        }

*/