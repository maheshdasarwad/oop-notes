/*
Exception Handling

1. Explain exception handling mechanism in C++ with program to handle 
    divide by zero exception
-->
    Exception Handling -->
    -> Exception are some unpredictable circumtances when our program terminate suddenly 
        with some errors or issues.These happens during running of that program.
    -> Exception handling in C++ allows the program to handle runtime errors 
        and ensure the program continues running without crashing.
    -> Provide a way to transfer control from one part of a program to another.
        C++ exception handling is built upon three keywords : try , catch and throw.

    Try Catch :
        -Hit the exception.
        -Throw the exception.
        -Catch the exception.
        -Perfrom the corrective action.

    Code within a try/catch block is referred to as protected code.
    
    try block :
        Code that might throw an exception is placed inside this block.

    throw keyword :
        - Used to throw an exception when an error occurs.
        - Execptions can be thrown anywhere within a code block using throw statement.
        - Operand of the throw statements determines a type for the exception 
            and can be any expression.
    
    catch block :
        - Used to handle the exception thrown by the try block through throw.
        - we can specify what type of exception we want to catch.
                syntax : catch(type_of_exception)
        - To handle any type of exception use -> catch(...) [ellipsis between paranthesis].
        - Here we handles the problem.
    
    Syntax :

        try{

            //code that may throw exception

        } catch( type_of_exception ){
                //code to handle exception
        }

    Example :
        #include <iostream>
        using namespace std;

        int main()
        {
            int a , b;
            cout<<"\Enter a number and divisor : ";
            cin>>a>>b;
            try
            {
                if(b == 0)
                {
                    throw(b);
                }
                else
                {
                    cout<<"\nDivision = "<<a/b;
                }
            }catch(int){
                cout<<"Division by "<<b<<" Error.!";
            }
            
            return 0;
        }
       
2. How multiple catching is implemented in exception handling?
-->
    C++ allow us to use multiple catch block to handle different 
        types of exceptions.
    One try can have multiple catch blocks but 
        many try block cannot have one catch bock.
    When an exception is thrown in try block the program checks 
        each catch block in sequence to find a matching exception type.
    Once a match is found that catch block is executed, 
        and no other catch blocks are checked.
    
    Sytnax :

        try{
            //code that may throw exception
        } catch( type1 e1) {
            //Handle exception of type1
        } catch( type2 e2) {
            //Handle exception of type2
        } catch(...) {
            //Handle all exception
        }
    

    Example :

        #include <iostream>
        using namespace std;

        int main()
        {
            int x;
            cout<<"\nEnter a value : ";
            cin>>x;

            try
            {
                if(x == 0) throw(x);
                if(x == 100) throw('E');
                if(x == 50) throw(50.5f);
                else cout<<"\nSuccessfull...."<<endl;

            } catch(int x) {
                cout<<"\nError x integer = "<<x<<endl;
            } catch(char x) {
                cout<<"\nError x char = "<<x<<endl;
            } catch(float x) {
                cout<<"\nError x float = "<<x<<endl;
            }

            return 0;
        }


3. What do you mean by rethrowing exceptions? Write a program for the same.
-->
    Rethrowing an exception means catching an exception in catch block &
                                  then throwing it again so that it can be
                                  handled by another catch block or by 
                                        the calling function.
    Useful when you want to process the exception partially in one layer 
        & then pass it to a higher layer for further handling.
    
    To rethrow an exception, use the throw keyword without specifying 
        any exception object, inside the catch block.
    
    Example : 

        #include <iostream>
        using namespace std;

        void validateNo(int num)
        {
            try
            {
                if( num <= 0)
                {
                    throw("\nInvalid Account Number.");
                }
                else
                {
                    cout<<"\nAccount validation successful."<<endl;
                }
            } catch(...) {
                cout<<"\nError in validation..!";
                throw; //rethrowing the same exception.
            } 
        }

        void transaction( int num)
        {
            try{
                validateNo(num);
            } catch(...){
                cout<<"\nErrror In Transaction..!";
            }
        }

        int main()
        {
            int num;
            cout<<"\nEnter account number : ";
            cin>>num;

            transaction(num);

            cout<<"\nExecuted Successfully..."<<endl;
            return 0;
        }

4. What is an exception specification? Explain using suitable example.
-->
    Exception specification is a way to declare the types of exceptions
        a function might throw.
    If we wanted to throw only certain exception then also it is possible.
    In this case exception will be thrown only for specified conditions 
        and not for all the conditions.
    It is possible by adding throw list clause during function definition

    Ways to specify exception behavior -->

        returntype functionName(arg) throw( type list)
        {
            //body of the function
        }
    

    Example :
        #include <iostream>
        using namespace std;

        void check(int num) throw(int , const char*)
        {
            if(num == 1)
            {
                throw 100; //throw integer
            }
            else if(num == 2)
            {
                throw("\nstring exception."); //throw string
            }
            else
            {
                cout<<"\nNo exception thrown !"<<endl;
            }
        }

        int main()
        {
            int num ;
            cout<<"\nEnter a number : ";
            cin>>num;

            try
            {
                check(num);
            } catch(int e) {
                cout<<"\nCaught an interger exception : "<<e<<endl;
            } catch(const char *e){
                cout<<"\nCaught a string exception : "<<e<<endl;
            }

            cout<<"\nProgram execution successfull...";
            return 0;
        }

5. What is meant by user-defined exception? Give one example.
-->
    User defined exception is a custom exception class created by
    the programmer to represent specific error conditions in a program.
    This allow for meaningful and context-specific error handling.

    In c++ exceptions are typically reprsented by objects.
    You can create a user-defined exception by defining your own 
        class and using it with throw try, and catch bocks.
    
    Example :- 

        #include <iostream>
        #include <exception> 
        using namespace std;

        class divByZeroExcep : public exception
        {
            public :

                const char* what() const throw()
                {
                    return "\nDivision by zero is not allowed";
                }
        };

        double divide(float numerator , float denominator)
        {
            if(denominator == 0)
            {
                throw divByZeroExcep();
            }

            return numerator / denominator ;
        };
        int main()
        {
            float num1 , num2 ;
            cout<<"\nEnter Numerator and Denominator : ";
            cin>>num1>>num2;

            try{
                float result = divide(num1 , num2);
                cout<<"Result : "<<result<<endl;
            } catch(divByZeroExcep &e) {
                cout<<e.what()<<endl;
            }

            cout<<"\nProgram execution successfull.....";
            return 0;
        }
        
            
4. Write a program to demonstrate class type exception handling.
-->
            #include <iostream>
            #include <exception>
            #include <string>

            using namespace std;

            // Custom exception class for division by zero
            class DivideException : public exception {
                private:
                    string message;

                public:
                    DivideException()
                    {
                        message = " Division by zero..!";
                    }
                    const char* what() const throw() {
                        return message.c_str();
                    }
            };

            class Calculator {
                public:
                    double divide(float num1, float num2) {
                        if (num2 == 0) {
                            throw DivideException();
                        }
                        return num1 / num2;
                    }
            };

            int main() {

                float num1 , num2;
                cout<<"Enter numerator : ";
                cin>>num1;

                cout<<"Enter dinominator : ";
                cin>>num2;
                
                Calculator obj;

                try {
                    float result = obj.divide(num1 , num2);
                    cout<<"\nResult = "<<result<<endl;
                }
                catch (const DivideException &e) {
                    cout<<"\nError : "<< e.what()<<endl;
                
                }
                catch (...) {
                    cout<<"\nUnknown error occurred...!"<<endl;
                }

                return 0;
            }


7. Explain exception handling in constructor, destructor

    -> Exception handling can be used in conjunction with constructors and destructor 
        to provide resource management that ensures that all locked resources are 
            unlocked when an exception is thrown.

    -> Exception Handling in constructors :
        - In c++ consturctors are used to initialize objects. If an error 
            occurs during this initialization, you can throw an exception
            to indicate the failure. 
        - If an exception is thrown in a constructor, the object is considered 
            not fully constructed and the destructor for that object will 
                not be called.
        - We need to clean up any resources allocated before the exception occurred.
            use try-catch blocks inside consturctors to ensure proper cleanup.
        - Re-throw the exception using throw; to infrom the caller of failure.

    -> Exception Handling in destructors :
        - Destructors are used for resource cleanup when an object goes out of scope.
        - Throwing exceptions in destructors is dangerous and generally discouraged.
        
    -> Whenever exception is thrown control passes to catch block 
        destructors are called automatically for all objects constructed since 
            the beginning of try block which are associated with catch block.

    -> Whenever an exception is thrown all objects created inside try block are 
        destructed before the control is transfered to catch block.

    Example :
*/
        #include <iostream>
        #include <exception>
        #include <cmath>
        using namespace std;

        class NegativeHandle : public exception
        {
            public :
                
                const char* what() throw()
                {
                    return " Negative Number ";
                }
        };

        class MathHandler
        {
            private :
                double *value;
                double num;
            public :
                MathHandler(double num)
                {
                    this -> num = num;
                    if(num < 0)
                    {
                        throw NegativeHandle();
                    }
                    try{
                        value = new double;
                        *value = sqrt(num);
                        cout<<"Square root of "<<num<<" = "<<*value<<endl;
                    } catch(bad_alloc &e)
                    {
                        cerr<<"\nMemory allocation failed"<<endl;
                        throw;
                    }
                }

                ~MathHandler()
                {
                    try
                    {
                        cout<<"\nDestrucor called for number : "<<num<<endl;
                        if(value != nullptr)
                        {
                            delete value;
                            value = nullptr;
                            cout<<"Data Cleaned.."<<endl;
                        }

                        if(num == 0)
                        {
                            throw runtime_error("Simulated Exception in destructor.");
                        }
                    }
                    catch(const exception &e)
                    {
                        cerr<<"\nException in destructor : "<<e.what()<<endl;
                    }
                    
                }
        };

        int main()
        {
            int num;
            cout<<"\nEnter a number to find square root : ";
            cin>>num;

            try
            {
                MathHandler obj(num);
            }
            catch(NegativeHandle &e)
            {
                cerr<<"\nException caught : "<<e.what()<<endl;
            }
            catch(const exception &e)
            {
                cerr<<"\nCaught standard exception : "<<e.what()<<endl;
            }
        }


