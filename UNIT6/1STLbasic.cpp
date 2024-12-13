/*
STL
1. Explain the concept of the Standard Template Library (STL) in C++.
    What are its key components?
-->
    STL (Standard Template Library) :
        -> It is newly added concept in c++.
        -> It is nothing but collection of functions and classes.
        -> It saves considerable time and space in program development.
        -> It helps in creating high qualities program and software.
        -> It is part of generic programming.
        -> They provide library for many frequently used classes 
            like stack ,queue, arry etc.
        -> They use template concept for its implementation.
        -> STL ease the programming by providing readymade facilities for
            frequently used data types.
    
    Key Components of STL :
    Primarily divided into three main components :

    1. Containers :
                Containers are data structures that stores collections of objects .
                    They are designed to manage memory and organize data efficiently.
                
    2. Algorithms :
                Algorithms are functions that perfrom operation on containers such as
                    searching, sorting and modifying data.

    3. Iterators :
                 It is an object that allows a program to traverse through the elments of a 
                    container like vector, list, set etc.
                 It provides a generalized way to access the elements of containers, making it 
                    easier to work with different types of containers in a unifrom manner.
          
    

2. What is a Map? Write a program to implement a map in C++.
-->
    Map :
        A map is a associative container in the STL that stores elements as 
            key-value pairs.
            where keys are unique and associated with a single value.
        Internally map uses a balanced binary search tree ensuring logarithmic time
            complexity for insertion, deletion and search operations.
        The key are in sorted order.

    Syntax : Declaration -> #include <map>
                            map <key_type,value_type> mapName ;
    
    Example :
*/
    #include <iostream>
    #include <map>
    #include <string>
    using namespace std;

    class Student
    {
        private :
            map<string , float> exam;
        
        public :

            void add(string name , float marks)
            {
                exam[name] = marks;
                cout<<"\nStudent record added successfully.";
            }

            void search(string name)
            {
            if(exam.count(name)) //if key exists
            cout<<"\nFound ! : "<<name<<" : "<<exam[name];
            else cout<<"\nRecord not found...!";
            }

            void display()
            {
                cout<<"\nStudents Record --> "<<endl;
                if(exam.empty()){
                    cout<<"\nNo Records available.";
                    return;
                }
                //for(const auto &pair_name : mapName)
                for(const auto &pair : exam)
                {
                    cout<<pair.first<<" "<<pair.second<<endl;
                }
            }
    };

    int main()
    {
        Student s;
        s.add("Mahi" , 20);
        s.add("Ram" , 22);
        s.add("Seeta" , 24);
        s.add("Ravi" , 26);

        s.display();

        s.search("Raj");
    }

/*
    OUTPUT :

    Student record added successfully.
    Student record added successfully.
    Student record added successfully.
    Student record added successfully.

    Students Record -->
    Mahi 20
    Ram 22
    Ravi 26
    Seeta 24

    Record not found...!
    
*/