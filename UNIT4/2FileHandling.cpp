/*
File Handling

    1. Explain the two ways in which files can be opened:
        using a constructor and 
        open() function 
        (with a program).
    -->
        File can be opened in two main ways :
        1. Using Constructor :
            - When creating a object of file stream classes(fstream , ifstream, ofstream)
                the file name and mode can be passed as arguments to the constructor.
            - The file automatically opens as the object is created.
            - Best for simpler use cases with predefined filenames and modes.

            syntax : fstream ofile("C:\\file_name.txt");

            Example :
                #include <iostream>
                #include <fstream>
                using namespace std;

                int main()
                {
                    string line;

                    fstream ofile("E:\\construct.txt", ios::in | ios::out | ios::trunc);

                    if(!ofile)
                    {
                        cout<<"\nError : In opening file..!";
                        return 1;
                    }

                    ofile<<"I writing exam..!";
                    ofile.close();
                    
                    cout<<"\nFile created successfully..";

                    return 0;
                }
        
        2. Using open() Function :
            - A file stream object is first created without opening the file.
            - The file is then opened using open() function later.
            - Useful when the filename or mode is determined dynamically.

            syntax : objfile.open("C:\\file_name.txt",mode);

             Example :

                #include <iostream>
                #include <fstream>
                using namespace std;

                int main()
                {
                    string line;

                    fstream ofile;
                    
                    ofile.open("E:\\construct.txt", ios::in | ios::out | ios :: trunc);
                    if(!ofile)
                    {
                        cout<<"\nError : In opening file..!";
                        return 1;
                    }
                    cout<<"\nEnter a line : ";
                    getline(cin,line);
                    ofile<<line;
                    ofile.close();
                    
                    cout<<"\nFile created successfully..";

                    return 0;
                }

*/

/*
    2. List and explain different mode bits used in the open() function 
        while opening a file (any five).
    
    -->
        When opening a file using open() function , different mode bits(flags)
            are used to specify the operations allowed on the file. 
        These flags control how the file is opened and 
                how data can be read or written.
        
        Following are open() functions :-
            1) iso::in
                This mode is used to open a file for reading.
                The file must exit, otherwise , error will occur.

                objfile.open("C:\\file_name.txt" , ios::in);
            
            2) ios::out 
                This mode is used to open file for writing.
                Already exiting file will get truncated(earsed) 
                    and if the do not exit creats new one
                
                objfile.open("C:\\file_name.txt", ios::out);

            3) ios::app
                This mode is used to open file for writing ,
                but will not overwrite the existing content. 
                Instead data will be written at the end of the file.

                objfile.open("C:\\file_name.txt", ios::app);

            4) ios::binary
                This mode is used to open the file in binary mode ,
                    which means data is read or written in its raw binary form.
                
                This flag ensueres file are handled as binary files, which is 
                    important for non-text files like images or executable files.
                
                objfile.open("C:\\file_name.txt", ios::binary);
            
            5) ios::trunc
                This mode is used when opening a file for writing.
                Ensures that the file is truncated(erased) before writing begins.
                typically used with ios::out to clear file's contents.

                objfile.open("C:\\file_name.txt", ios::out | ios::trunc);

*/

/*
    3. What do you mean by file handling? Explain the following functions:
            open()
            get()
            getline()
    -->

        File Handling :
            - It is the process of creating, reading, writing, and manipulating
                files in a program
            - In c++ file handling is primarily done using the fstream library, 
                which provides three main classes :
                    1. ifstream <-- (input file stream) - for reading from files
                    2. ofstream <-- (output file stream) - for writing to files
                    3. fstream <-- for both reading and writing files
            - They use file stream interface between program and 
                    file for data manipulations.
            - Stream which feed input to the program are called input stream
                    and stream which receives the data is known as output stream.

        1. open() Function :
                - Used to associate a file with an object of ifstream, ofstream, or fstream.
                - Called when you want to open a file after declaring the object,
                    allowing you to specify the file name and mode.
                
                Ex :- fout.open("C:\\file_name.txt", ios::in|ios::out|ios::trunc);
        
        2. get() Function :
                - Can read single character or into a buffer.
                - It is used to read a single character from a file.
                - It is particularly useful when you need to process
                    the file character by character , 
                    including whitespace characters.
                Ex :- cin.get(ch);

        3. getline() Function :
                - Used to read an entire line from a file.
                - It stops reading when it encounters a newline(\n) or the end of the file.

                Ex :- getline(cin , name);


        Manipulations function for file pointers ---->
        4. seekg() Function :
                Seek get
                - Purpose is to position the read pointer( get pointer ) 
                    to specific position.
                - Allow you to control where reading starts from within file.
                - Move input pointer to given position.
                - syntax = seekg( no_of_bytes , reference_ptr)
                
                    Ex:- fin.seekg(10); it moves pointer to 20 byte
        
        5. seekp() Funtion :
                Seek put
                - you can position the write pointer(put pointer) at a specific 
                    location in the file before writing additional content.
                - Useful if you want to overwrite.
                - Move the output pointer to given position.
                - syntax = seekg( no_of_bytes , reference_ptr)

                     Ex :- fout.seekp(20); moves pinter by 20 byte.
            
            in the above we use some pointer.
            ios::beg <- point to the begining of the file.
            ios::cur <- point to the current position.
            ios::end <- points end of file.
            ios::trunc <- used when opening a file. It erase the content if file already existing.
                          if not create a new file.
            ios::app <- used to add additional data to the exiting file at the end
                
        6. tellg() Function :
                Tell get
                - returns the current position to get pointer
                    Ex :- int g = ifobj.tellg();

        7. tellp() Function :
                Tell put
                - returns the current positon to put pointer
                    Ex :- int p = ofobj.tellp();
        
        Example :-

            #include <iostream>
            #include <fstream>
            using namespace std;

            int main()
            {
                int pos;
                char str[80];
                
                fstream ofile;

                ofile.open("E:\\file3.txt", ios::out | ios::in | ios::trunc);

                //Handle error
                if(!ofile)
                {
                    cout<<"Error opening file !";
                    return 1;
                }


                ofile<<"This is the File pointer file creation.";
                
                cout<<"\nCurrent position of put (write pointer) : ";
                cout<<ofile.tellp();

                ofile.seekg(0, ios::cur);
                
                cout<<"\nEnter the position to move from begining : ";
                cin>>pos;

                ofile.seekg(pos, ios::beg);

                cout<<"\nThe position of the get (read pointer) is : ";
                cout<<ofile.tellg();

                ofile.seekp(pos, ios::beg);
                cout<<"\nThe position of the put (write pointer) is : ";
                cout<<ofile.tellp();

                ofile.getline(str,50);
                cout<<"\nData read from file -> "<<str;

                ofile.close();

                return 0;
            }

*/
