/*

Namespace :-
Explain namespace with example.
-->
    Namespace in C++ is a feature that allows grouping of identifiers such as classes ,
     functions and variables under a single name. This prevents name conflicts in large 
        projects where different parts of the code might use the same identifiers.
    
    Syntax :-

        namespace namespace_name {
            // Declarations and definitions
        }
    
    Example :-

            #include <iostream>
            using namespace std;

            namespace MathOp
            {
                int add(int a, int b)
                {
                    return a+b;
                }

                int minus(int a, int b)
                {
                    return a - b;
                }
            }

            //Another namespace
            namespace StringOp
            {
                string concatenate(string a, string b)
                {
                    return a+b;
                }

                int length(string str)
                {
                    return str.length();
                }
            }

            int main()
            {
                //using mathop namespace
                cout<<"Addition : "<<MathOp::add(10,20)<<endl;
                cout<<"Substraction : "<<MathOp::minus(50,30)<<endl;

                //using stringop namespace
                cout<<"Concatenation : "<<StringOp::concatenate("Hello","World")<<endl;
                cout<<"Length : "<<StringOp::length("Hello world")<<endl;
            }


Streams :-
What is stream? Explain types of streams available in C++
-->
    Stream is an abstraction used for input and outpur operations.
    A stream is a flow of data between a program and external 
        device(Like keyboard , display , file etc.)
    
    Stream are divided into two :
    1. Input Stream :
        For reading data from devices (like keyboard, files).
    2. Output Stream :
        For writing data to devices (like console, files).
    
    Streams are handled through the iostream library.

    Standard Streams:
        cin (standard input stream)
        cout (standard output stream)
        cerr (standard error stream)
        clog (standard log stream)
    
Example :
            #include <iostream>
            #include <string>
            #include <fstream>
            using namespace std;

            int main()
            {
                int roll;
                string name;

                cout<<"\nFile writing operations ---> ";
                
                ofstream ofobj;

                ofobj.open("E:\\file1.txt");

                cout<<"\nEnter Roll Number : ";
                cin>>roll;
                
                
                cout<<"Enter your name : ";
                cin.ignore();
                getline(cin,name);
                
                //write data using put operator <<
                ofobj<<roll;
                ofobj<<name;
                ofobj.close();

                //Now to read the data
                ifstream ifobj;
                ifobj.open("E:\\file1.txt");

                //Read using operator <<
                ifobj>>roll;
                ifobj>>name;

                //now to print;
                cout<<"\nROLL = "<<roll;
                cout<<"\nName = "<<name;

                return 0;
            }

Type Names and Export Keywords :-
Write a short note on typename and export keyword.
-->
    typename :-
        When defining a template (function or class) typename is used to declare
        type parameters that will be specified when the template is generated.
    
        Syntax :-
            template <typename T>
            void func(T arg) {
                // Code using type T
            }
    
    export :-
        Was orginally used to declare templates outside of the current translation unit , 
            allowing them to be used across multiple unit
        The export keyword tells the compiler that the definition of the template is located in 
            another source file(translation unit) and can be used across translation units.

        Syntax :
            export template <typename T>
            void func(T arg) {
                // Function body
            }


*/