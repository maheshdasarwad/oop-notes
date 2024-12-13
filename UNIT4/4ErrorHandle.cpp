/*
    4. Explain the error handling in file I/O.
    -->
        - There may be error present during file handling. Some of the 
            errors are file not found, could not open file, could not 
            read file, could not write the file etc.
        - But for efficient programming we need to check such error 
            conditions to get the desired outcome from the program.
        - C++ provides various mechanism to detect and handle these
            errors effectively.
        - These error handling is possible by checking the return value 
            from functions of the object.

        Some Error handling functions --->

        1) Checking file opening - 
            !objfile : 
                    checks if the file stream object 
                        is in a valid state.

        1) eof()
            It return ture if end of file is reached otherwise false.
        
        2) fail()
            It return true when input or output operation failed.
    
        3) bad()
            Return true when invalid operation is attemped to perform.
        
        4) good()
            Return true if no error present.
*/


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;

    fstream ofile;
    ofile.open("E:\\file6.txt",ios::in | ios::out | ios::trunc); //opens file to read.

    cout<<"\nEnter a line : ";
    getline(cin,line);

    ofile<<line;

    if(!ofile)
    {
        cout<<"\nError in opening file !";
    }
    else cout<<"File opened successfully..";

    if(ofile.eof())
    {
        cout<<"\neof -> Reach end.";
    } else cout<<"\neof() -> Not at end.";

    if(ofile.fail())
    {
            cout<<"\nfail() -> operation failed."<<endl;
            
    } else cout<<"\nfail() -> operation passed";

    if(ofile.bad())
    {
        cout<<"\nbad() -> invalid operation.";
    }else cout<<"\nbad() -> valid operations.";
    
    ofile.close();

    //Final Check
    if(ofile.good())
    {
        cout<<"\nread() -> operations successfull..."<<endl;
    }
    else cout<<"\nread() -> operations failed..."<<endl;

    return 0;
}