/*
 Command line Argument :-
    1. Explain the use of command-line arguments. If we want to pass command-line 
        arguments, what will be the prototype of the main() function? 
        Explain its arguments along with an example.
    -->
        COMMAND - LINE ARGUMENTS :--
        -> Allow users to pass command line arguments to main function 
            just like we pass arguments to functions.
        -> Arguments can be passed at the time of running the program or 
            executing it from the terminal.
        -> Enabling coustomization of the program's behaviours 
            without modifying the code.
        
        Syntax : int main(int argc , char *argv[]);

                        argc <-- no. of arguments passed (argument count).
                                    when no argument given [argc = 1] <- default
                        argv <-- collects the passed arguments (agrument vector)
        
        Benefits :
            1) Flexibility : Allow dynamic input without hardcoding.
            2) Ease of Automation : Enable program to be invoked with different arguments.
            3) Custom Behavior : differen arguments can trigger different 
                                functionalities in the program.
        
        Example :
*/

            #include <iostream>
            #include <fstream>
            using namespace std;

            int main(int argc , char *argv[])
            {

                //display of argc
                cout<<"Number of Arguments (argc) : "<<argc<<endl;

                cout<<"Arguments (argv) : "<<endl;
                for(int i = 0 ; i < argc ; i++)
                {
                    cout<<"argv["<<i<<"] = "<<argv[i]<<endl;
                }

                return 0;
            }

/*
        OUPUT ->
        steps for execution -->
            S1. complie the program 
                Number of Argument (argc) : 1
                Arguments (argv) ---->
                argv[0] = c:\user\drive\oop"program_name <--- path saved

            S2. .\program_name.exe Hello world
                Number of Argument (argc) : 3
                Arguments (argv) ---->
                argv[0] = c:\user\drive\oop"program_name <--- path saved
                argv[1] = Hello
                argv[2] = world
*/