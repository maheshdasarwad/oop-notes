#include <iostream>
using namespace std;

/*
Virtual Functions
1). What are virtual functions? How are they implemented in C++? Explain with a program. [6]
-->
    Virtual Function :
    It is the concept of the runtime polymorphism which allows 
        calling derived class function through base class pointer.
    Declared with keyword " virtual ".
    Allows function overriding
    It use dynamic binding and supports late binding.

    How it works -->
        compiler creates a virtual function table ( vtable ).
        each class with virtual function has a vtable.
        vtable stores function pointers.
        when virtual function called, correct function selected at runtime.
    
    Example -->

        class Base
        {
            public :
                virtual void display()
                {
                    cout<<"\nBase class display "<<endl;
                }
        };

        class derived : public Base
        {
            public :
                void display()
                {
                    cout<<"\nDerived class display "<<endl;
                }
        };

        int main()
        {
            Base *baseptr;
            derived derivedobj;
            
            //pointer of base class pointing to derived class object
            baseptr = &derivedobj;

            //calls derived class display function
            baseptr -> display();

            return 0;
        }
*/

/*
2). How do you declare and define a pure virtual function in C++? Explain with a program. [6]
3). What is a pure virtual function? Illustrate its use with an example. [6]

-->
    Pure virtual function -->
        A virtual function that has no definition in the base class and 
        must be implemented by derived classes.
        The function declaration start with virtual keyword and ends with equal to 0
       
        syntax :
                declared in base class as ->
                    virtual return_Type fnct_name( ) = 0 ;

                initialized in the derived class.
                    return_Type fnct_name()
                    {........}

        Example :-

                class Shape
                {
                    public :
                        virtual float area() = 0;
                };

                class rectangle : public Shape
                {
                    protected :
                        int a , b;
                    public :
                        void getdata1()
                        {
                            cout<<"\nEnter Length and breadth : ";
                            cin>>a>>b;
                        }

                        float area()
                        {
                            return a * b;
                        }
                };

                class circle : public Shape
                {
                    protected :
                        int r;
                    public :
                        void getdata2()
                        {
                            cout<<"\nEnter Radius : ";
                            cin>>r;
                        }

                        float area()
                        {
                            return 3.14 * r * r;
                        }
                };

                int main()
                {
                    rectangle rr;
                    circle cc;

                    rr.getdata1();
                    cc.getdata2();

                    cout<<"\nArea of rectangel = "<<rr.area()<<endl;
                    cout<<"\nArea of circle = "<<cc.area()<<endl;

                    return 0;
                }
*/

/*

Virtual Destructors
1). Explain the virtual destructor with the help of a program. [6]

    Virtual Destructors :
        Declared using " virtual " keyword.
        Ensures proper cleanup of derived class objects.
        Prevent memory leaks.
        called in reverse order of construction.
        require when using polymorphism.
    
    without virtual destructor derived class destructor won't be called.
    prevents memory leaks

    Example :

        class Base
        {
            public :
                Base()
                {
                    cout<<"\nBase constructor called."<<endl;
                }

                virtual ~Base()
                {
                    cout<<"\nBase Destructor called."<<endl;
                }
        };
        
        class Derived : public Base
        {
            private :
                int *ptr;
            public :
                Derived()
                {
                    cout<<"\nDerived constructor called."<<endl;
                    ptr = new int(10);
                }

                ~Derived()
                {
                    cout<<"\nDerived destructor called."<<endl;
                    delete ptr;
                }
        };

        int main()
        {
            cout<<"\nCreating Base pointing to Derived object -->";
            Base *ptr = new Derived();

            cout<<"\nDeleting Base pointer.---->";
            delete ptr;
            
            return 0;
        }

*/