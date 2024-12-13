/*
Class Templates

1. Explain class template and function template with example.
-->
    In C++ generic programming is implemented through templates 
        which allow functions and classes to operate with generic types.

    Function template : Generaliize funtions to work with any data type.
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
*/

/*
2. Explain class template using multiple parameters with program.
-->
    A class template with multiple parameter allows creating a generic class 
        that can handle multiple data types.

    Syntax :

        template <typename T1, typename T2>
        class ClassName {
            // Members and methods using T1 and T2
        };
    
    Example :

            #include <iostream>
            using namespace std;

            template <typename T1 , typename T2>

            class Maths
            {
                private :
                    T1 value1;
                    T2 value2;

                public :
                    Maths(T1 a, T2 b)
                    {
                        value1 = a;
                        value2 = b;
                    }

                    void add()
                    {
                        cout<<"\nAddition = "<<value1 + value2;
                    }

                    void multiply()
                    {
                        cout<<"\nMultiply = "<<value1 * value2;
                    }

                    void display()
                    {
                        cout<<"\nValue 1 = "<<value1<<"\nValue 2 = "<<value2;
                    }
            };

            int main()
            {
                Maths<int, float> obj1(10, 9.3);
                obj1.display();
                obj1.multiply();
                cout<<endl;

                Maths<string , char > obj2("Hello ", 'M');
                obj2.display();
                obj2.add();
                cout<<endl;
            }

            /*
            OUTPUT :
                Value 1 = 10
                Value 2 = 9.3
                Multiply = 93

                Value 1 = Hello 
                Value 2 = M
                Addition = Hello M
            
*/