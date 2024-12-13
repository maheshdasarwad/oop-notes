#include <bits/stdc++.h>
using namespace std;

/*

Operator Overloading --------->
1). What is operator overloading? Why is it necessary? [6]
-->
    Operator Overloading :

    It is the concept of the compile time polymorphism which enables us to 
        assign a new definition to the already existing operator.
    After overloading the appropriate operators you can use objects in expression 
        in just the same way that you use C++ built-in data type.

    For Example :
        statements like d3.addobj(d1,d2);
        can be changed to d3 = d1 + d2;
    
    WHY ->
    1. Allows developers to write expressions that are intuitive and easy to understand.
        For Ex : a.add(b) can be wirtten a + b;
    2. Operators can be customized for specific use cases such as adding two complex numbers ,
        concatenating strings, comparing objects.
    3. Make code reusability and reduces redundancy by allowing the same operator 
        to work with different types of data.
    4. Operators can work with user defined types as naturally as they do with built-in types.
    5. To provide the clean and modular facility by encapsulating behaviour directly
        within the class.
*/

/*         
2). Explain need of operator overloading.What are the rules 
    to be followed when overloading an operators C++? [5]
-->
    Need of operator overloading -->
    1. Allows developers to write expressions that are intuitive and easy to understand.
        For Ex : a.add(b) can be wirtten a + b;
    2. Operators can be customized for specific use cases such as adding two complex numbers ,
        concatenating strings, comparing objects.
    3. Make code reusability and reduces redundancy by allowing the same operator 
        to work with different types of data.
    4. Operators can work with user defined types as naturally as they do with built-in types.
    5. To provide the clean and modular facility by encapsulating behaviour directly
        within the class.

    RULES TO BE FOLLOWED -->

    1. Can overload only existing operators . Cannot create new ones.
    2. No. of operands an operator takes cannot be changed.
        Unary : operate on single operand.
        Binary : operate on two operand.
    3. Overloaded operators must be defined as function.
        (may it be member or non-member functions.)
    4. At least one operand must be a user defined type.
    5. Maintain logical consistency and use meaningful implementations.
    6. Certain operators cannot be overloaded
            These includes :
                i) ( :: )        scope resolution
               ii) ( * )         member pointer access
              iii) [ sizeof() ]  size operator
               iv) (? , :)       conditional operator
    7. Default arguments cannot be used to operator overloading.
    
3). Which operators cannot be overloaded ? Write the steps to overload 
    the + operator so that it can add two complex numbers. [6]
-->
    Following operators cannot be overloaded :
    1). Ternary Conditional  ----->       ? , :
    2). Scope        ----->                ::
    3). Size operator  --->              sizeof
    4). member pointer access -->          (*)
    5). Member selection operator -->      (.)

    Steps to overload the + operator :
        - Declare the operator function inside the class.
        - Use the syntax --> class_name operator + ( class_name &obj ) {.....}
        - Create a new object to store the result.
        - Add real parts of the two complex no.
        - Add imaginary parts of the two complex numbers.
        - Return a new object with computed values.
    Ex :-
            class_name operator + (class_name &obj)
            {
                class_name objnew;
                objnew.real = real + obj.real;
                objnew.imag = imag + obj.imag;
                return objnew;
            }


Unary Operators (require one operand):
    Unary plus      (+)
    Unary minus     (-)
    Increment       (++)
    Decrement       (--)
    Logical NOT     (!)
    Bitwise NOT     (~)
    Address-of      (&)
 

Binary Operators (require two operands):
    Arithmetic:     +, -,0 /, %
    Relational:     ==, !=, <, >, <=, >=
    Logical:        &&, ||
    Bitwise:        &, |, ^, <<, >>
    Assignment:     =, +=, -=, *=, /=, %=

*/

/*
4). Define a class string 
    and use a binary overloaded operator (==) 
    to compare two strings. [6]
-->

    class String 
    {
        string s1;
        string s2;

        public :
            String(string s1, string s2)
            {
                this -> s1 = s1;
                this -> s2 = s2;
            }

            bool operator <= ( const String &obj)
            {
                return s1 == obj.s1 && s2 == obj.s2;
            }
    };

    int main()
    {
        String obj1("Hello" , "World") , obj2("World" , "Hello") , obj3("Hello" , "World");
;

        if(obj1 <= obj2) cout<<"\nString s1 <= s2."<<endl;
        if(obj1 <= obj3) cout<<"\nString s1 <= s3."<<endl;
        else cout<<"\nThe strings are not equal."<<endl;

        return 0;
    }
*/

/*
5). Write a C++ program to:
    i.   Overload binary operators. [6]
    -->
        class String 
        {
            string s;
            int length;

            public :
                String(string s)
                {
                    this -> s = s;
                }

                bool operator == ( String &obj)
                {
                    if(s == obj.s) return true;
                    return false;
                    // return s == obj.s;
                }
        };

        int main()
        {
            String obj1("Hello") , obj2("World"), obj3("Hello");

            if(obj1 == obj2) cout<<"\nString s1 = s2."<<endl;
            if(obj1 == obj3) cout<<"\nString s1 = s3."<<endl;
            else cout<<"\nThe strings are not equal."<<endl;

            return 0;
        }
*/


/*
    ii.  Overload the insertion (<<) and extraction (>>) operators. [6]
    --> 
        class Complex
        {
            float real, imag;
            
            public :
                Complex()
                {
                    real = imag = 0;
                }

                friend istream& operator >> (istream &in , Complex &obj)
                {
                    cout<<"\nEnter real part : ";
                    in>>obj.real;

                    cout<<"Enter imaginary part : ";
                    in>>obj.imag;

                    return in;
                }

                friend ostream& operator << ( ostream &out , Complex &obj )
                {
                    out<< obj.real <<" + ("<<obj.imag<< ") i ";
                    return out;
                }
        };

        int main()
        {
            Complex obj1 , obj2;

            cout<<"\nEnter first complex number -> ";
            cin>>obj1;

            cout<<"\nEnter second complex number -> ";
            cin>>obj2;

            cout<<"\nComplex 1 = "<<obj1;
            cout<<"\nComplex 2 = "<<obj2;
        }
*/

/*
    iii. Overload binary operators like + and -. [6]

            class demo
            {
                int a;
                public :
                    void getdata()
                    {
                        cout<<"\nEnter a number : ";
                        cin>>a;
                    }

                    void display()
                    {
                        cout<<a;
                    }

                    demo operator + ( demo obj)
                    {
                        demo objnew;
                        objnew.a = a + obj.a;
                        return objnew;
                    }

                    demo operator - ( demo obj)
                    {
                        demo objnew;
                        objnew.a = a - obj.a;
                        return objnew;
                    }
            };

            int main()
            {
                demo obj1 , obj2 , obj3;
                obj1.getdata();
                obj2.getdata();

                obj3 = obj1 + obj2;
                cout<<"\nAddition --> ";
                obj3.display();

                obj3 = obj1 - obj2;
                cout<<"\nSubstraction --> ";
                obj3.display();
                
                return 0;
            }
*/

/*
    iv.  Demonstrate use of unary operator (--) overloading using a member function 
         and unary operator overloading (++) using friend function. [6] 
    -->
            class demo
            {
                int a;
                public :
                    void getdata()
                    {
                        cout<<"\nEnter a number : ";
                        cin>>a;
                    }

                    void display()
                    {
                        cout<<a;
                    }

                    void operator ++() //preincrement
                    {
                        a = a + 1;
                    }
                    void operator --( ) //predecrement
                    {
                        a = a - 1;
                    }

                    friend void operator ++ ( demo &obj, int); //postincrement
                    friend void operator --( demo &obj , int); //preincrement
            };

            void operator ++ ( demo &obj, int)
            {
                obj.a = obj.a + 1;
            }

            void operator --( demo &obj , int)
            {
                obj.a = obj.a - 1;
            }

            int main()
            {
                demo obj;
                obj.getdata();


                ++obj;
                cout<<"\nAfter preincrement : ";
                obj.display();
                cout<<endl;

                obj++;
                cout<<"\nAfter postincrement : ";
                obj.display();
                cout<<endl;

                --obj;
                cout<<"\nAfter predecrement : ";
                obj.display();
                cout<<endl;

                obj--;
                cout<<"\nAfter postdecrement : ";
                obj.display();
                cout<<endl;

                return 0; 
            }
*/

/*
    v.   Write a program to overload the + operator for adding two complex numbers,  [6]
         where the class is:

            class Complex
            {  
                private:  
                    int real, imag;

                public :

                    void getdata()
                    {
                        cout<<"\nEnter complex number : (real , imag) ";
                        cin>>real>>imag;
                    }

                    void display()
                    {
                        cout<<"\nComplex Number = "<<real<<" + ("<<imag<<") i ";
                    }

                    Complex operator +( Complex &obj)
                    {
                        Complex newObj;
                        newObj.real = real + obj.real;
                        newObj.imag = imag + obj.imag;

                        return newObj;
                    }                    
            };

            int main()
            {
                Complex obj1 , obj2, obj3;
                obj1.getdata();
                obj2.getdata();
                obj3 = obj1 + obj2;

                obj1.display();
                obj2.display();

                cout<<"\nRESULT --> ";
                obj3.display();

                return 0;
            }
*/

