#include <iostream>
using namespace std;

/*
Abstract Base Classes
1). What is an abstract base class in C++? Explain with a program. [5]
2). Explain the concept of an abstract class with an example. [6]
-->

    Abstract Base Class :
        -> The class which contains atleast one pure virtual function.
        Cannot be instantiated on its own.
        Primary purpose to define a common interface for its derived class.
        Forced derived classes to implement pure virtual functions.

    Example
*/
        class shape
        {
            protected :
                float area;
            public :

                virtual float calArea() = 0 ;

                void display()
                {
                    cout<<"\nArea = "<<area<<endl;
                }
        };

        class circle : public shape
        {
            private :
                float radius;
            public :
                void getdata1()
                {
                    cout<<"\nEnter Radius of circle : ";
                    cin>>radius;
                }

                float calArea()
                {
                    area = 3.14 * radius , radius;
                    return area;
                }
        };

        class rectangle : public shape
        {
            float a , b;
            public :
                void getdata2()
                {
                    cout<<"\nEnter the length and breadth : ";
                    cin>>a>>b;
                }

                float calArea()
                {
                    area = a * b;
                    return area;
                }
        };

        int main()
        {
            shape *ptr;
            circle cc; rectangle rr;

            ptr = &cc;
            cc.getdata1();
            ptr -> calArea();
            ptr-> display();

            ptr = &rr;
            rr.getdata2();
            ptr -> calArea();
            ptr-> display();

            return 0;
        }
