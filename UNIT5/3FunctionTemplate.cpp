/*
Function Templates

1. Write a C++ program involving a function template.
-->
        #include <iostream>
        using namespace std;

        template<typename T>

        void swapValue(T &a , T &b)
        {
            T temp = a;
            a = b;
            b = temp;
        }

        int main()
        {
            int a , b;
            cout<<"\nEnter A = ";
            cin>>a;
            cout<<"Enter B = ";
            cin>>b;

            swapValue(a,b);
            cout<<"After swap : A = "<<a<<" and B = "<<b<<endl;


            string c , d;
            cout<<"\nEnter C = ";
            cin>>c;
            cout<<"Enter D = ";
            cin>>d;

            swapValue(c,d);
            cout<<"After swap : C = "<<c<<" and D = "<<d<<endl;

            return 0;
        }
        /*
        OUTPUT :
            Enter A = 5
            Enter B = 2
            After swap : A = 2 and B = 5

            Enter C = Ratan
            Enter D = Tata
            After swap : C = Tata and D = Ratan
        */
        

        
/*
        
2. Demonstrate overloading function template with suitable code in C++

        #include <iostream>
        using namespace std;

        template <typename T1>
        void display(T1 val)
        {
            cout<<"Generic display : "<<val<<endl;
        }

        template <typename T2>
        void display(T2 num1 , T2 num2)
        {
            cout<<"sepecialized display : "<<num1<<" and "<<num2<<endl;
        }

        //NON Template
        void display(string mesg)
        {
            cout<<"Message : "<<mesg<<endl;
        }

        int main()
        {
            display(10);
            display(20);

            display(100,200);
            display(10.3 , 20.5);

            display("Hello");
            display("How are you..");
        }

        /*
        OUTPUT :
        Generic display : 10
        Generic display : 20

        sepecialized display : 100 and 200
        sepecialized display : 10.3 and 20.5

        Generic display : Hello
        Generic display : How are you..
        */
/*
4. Distinguish between overloaded function and function template with suitable example
-->
    Overloaded Function :
    1. Functions with the same name used in different situations name 
        but different parameter or data types.
    2. Provides specific implementation for different parameter types.
    3. Each overloaded functions need to be explicity written.
    4. Limited to predefined data types.
    5. Requires a separate implementation for each type.
    
    Function Template :
    1. Generaliize funtions to work with any data type.
    2. Provides a generic implementation for multiple parameter types.
    3. A single function is written and adapted for all types.
    4. Flexible and works with any type.
    5. Compiler generates specific implementation based on usage.

    Function Overloading --->

        int add(int a, int b) {
            return a + b;
        }
        string add(string a, string b) {
            return a + b;
        }

        int main() {
            cout<<"Addition of integers : "<<add(10, 20)<<endl;
            cout<<"Addition of strings : "<<add("Ratan"," Legacy")<<endl;

            return 0;
        }

    Function Template :
        template <typename T>
        T add(T a, T b) {
            return a + b;
        }

        int main() {
        cout<<"Addition of integer : "<<add(10, 20)<<endl;

        string str1 = "Tata" , str2 = "Legacy";
        cout<<"Addition of string : "<<add(str1 , str2)<<endl;
        return 0;
        }
        
        T <- generic variable
*/