/*
Generic Programming

1. What is generic programming? How it is implemented in C++
-->
    Generic Programming :
    It is type of programming where we are desinging the algorithm where 
        in type of data is specified at run time.
    It is approach of creating generalize algorithms which are applicable
        for all data types
    We are writing generalized code and compiler decides for what type of 
        data it should work.
    The primary goal is to maximize code reuse and flexibility.
    
    In C++ generic programming is implemented through templates 
        which allow functions and classes to operate with generic types.

        Function template : Generalize funtions to work with any data type.
            Ex :

                template <typename T>

                T FindMax(T a, T b) {
                    if(a>b) return a;
                    return b;
                }

                int main() {
                    cout<<"Max of 10 and 20 : "<<findMax(10, 20)<<endl;
                    cout<<"Max of 5.5 and 2.2 : "<<findMax(5.5, 2.2)<<endl;
                    return 0;
                }
        
        T <- generic variable


        Class template : Generalize classes to handle object of any data type.

        Example :

                #include <iostream>
                using namespace std;

                // Class template
                template <class T>
                class Calculator {
                    T num1, num2;

                public:
                    Calculator(T a, T b) {
                        num1 = a;
                        num2 = b;
                    }

                    T add() { 
                        return num1 + num2;
                    }
                    T multiply() {
                        return num1 * num2;
                    }
                };

                int main() 
                {
                    Calculator<int> calc1(10, 20);

                    cout<<"Addition : "<<calc1.add()<<endl;
                    cout<<"Multiplication : "<<calc1.multiply()<<endl;

                    Calculator<float> calc2(5.5, 2.2);
                    cout<<"Addition : " <<calc2.add()<<endl;
                    cout<<"Multiplication : "<<calc2.multiply()<<endl;

                    return 0;
                }



2. What is the power of templates in C++? Explain along with one example.
-->
    Template is a way of creating generalize functions and classes which are applicable
        for all data type without changing the definition of program
    Templates are newly added feature in C++ which allows us to 
        define generic classes and functions.
    Has power to enable generic programming.
    Templates are useful in achieving dynamic polymorphism.

    Promotes code reusability
    Ensures that operations within the template are type-safe, 
        catching errors at compile time
    Flexibly adapt to any data type.
    Allows development of highly Scalable algorithms and data structures like STL

    Example :

        #include <iostream>
        #include <vector>
        using namespace std;

        template <class T>
        class stack
        {
            private :
                T arr[5];
                int idx = -1;
            
            public :
                void push(T value)
                {
                    if(idx == sizeof(arr)/sizeof(arr[0]) - 1)
                    {
                        cout<<"\nStack overflow."<<endl;
                        return;
                    }
                    idx = idx + 1;
                    arr[idx] = value;
                }

                void pop()
                {
                    if(idx == -1)
                    {
                        cout<<"\nStack underflow."<<endl;
                        return;
                    }
                    idx = idx - 1;
                }

                void display()
                {
                    for(int i = 0 ; i <= idx ; i++)
                    {
                        cout<<arr[i]<<" ";
                    }
                }
        };

        int main()
        {
            stack<int> st1;
            st1.push(10);
            st1.push(20);
            st1.push(30);
            st1.pop();
            st1.display();

            stack<string> st2;
            st2.push("Hello");
            st2.push("world");
            st2.push("OOP");
            st2.pop();
            st2.display();

        }
*/
