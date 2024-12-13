/*
Stream Classes and Hierarchies

    1. What are stream classes and their uses? Provide the hierarchy of stream 
        classes in C++.
    -->
        Stream Classes :
        In c++ input / output consist of hierarchy of classes which are useful 
        to manage input output of the system.
        Such input output classes is called stream classes.

                                 -----
                                | ios |
                                 -----
             -------               |                 -------    
            |istream| <---------------------------> |ostream|    
             -------                                 -------
                |                --------               |
                |-------------> |iostream| <------------|
                |                --------               |
             --------                |               --------
            |ifstream|               |              |ofstream|
             --------                |               --------
                                  -------              
                                 |fstream|
                                  -------


        THEIR USES -->
        1) ios is base of all classes.
        2) istream is used for input purpose.
        3) ostream is used for output purpose.
        4) iostream is used for both input and output purpose.
        5) ifstream is used for input from file.(open file to read)
        6) ofstream is used for output to the file.(open file to write)
        7) fstream is used for both input from file and output to file

*/

/*
    2. What is fstream, ifstream, and ofstream? Explain with examples and 
        provide the hierarchy of stream classes in C++.
    -->
        ifstream , ofstream and fstream classes are file classes.

        ifstream -
            ifstream is subclass of istream.
            used to read the information from file.
            different functions avialable -
                open(), get(), getline(), read(), seekg(), tellg() etc.
        
        ofstream -
            ofstream is subclass of ostream.
            used to write the information in the file.
            different funtion avialabe -
                open(), put(), seekp(), tellp(), write() etc.
        
        fstream -
            Used when we have to perfrom both the operation of read and write infromation
                from file.
            fstream is the subclass of iostream.
            has the functionalities of the both ifstream & ofstream.
        
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

                //Read using operator >>
                ifobj>>roll;
                ifobj>>name;

                //now to print;
                cout<<"\nROLL = "<<roll;
                cout<<"\nName = "<<name;

                return 0;
            }
*/

/*
    3. Explain formatted and unformatted input and output functions in C++ with examples.
    -->
        Formatted I/O
        - Used to read and write data in a way that respects the specified formatting.
        - These allows the developer to specify the format in which data 
            is input or output.
        - These functions use manipulators to control how data is displayed or read.

        Characterstics :
        Automatically handles 
            Data type conversion
            Buffer management.
            Proper spacing.
            Chainable operations(using << and >>)
        Typically uses iostream function such as :
            input : cin
            output : cout

        Example :

            #include <iostream>
            using namespace std;

            int main()
            {
                int roll;
                string name;

                cout<<"\nEnter your name : ";
                cin>>name;

                cout<<"\nEnter you roll no. : ";
                cin>>roll;

                cout<<"\nName = "<<name;
                cout<<"\nRoll No = "<<roll;

                return 0;
            }
     
        Unformatted I/O
        - Use to read and write data in a raw format, without formatting.
        - It is faster but less flexible compared to formatted I/O.

        characterstics:
            Includes whitespaces.
            No data type conversion.
            Function include :
                Input : get() , getline()
                Output : put() , write()
        
        Example :
        */
            #include <iostream>
            using namespace std;

            int main()
            {
                char ch;

                cout<<"\nEnter a character : ";
                cin.get(ch);

                cout<<"\nOutput = ";
                cout.put(ch);
            }

