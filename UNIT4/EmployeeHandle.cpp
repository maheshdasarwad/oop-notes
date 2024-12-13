#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name;
    int ID;
    double salary;

    fstream ofile;
    ofile.open("E:\\file5.txt", ios::in | ios::out | ios::trunc);

    //To handle error
    if(!ofile)
    {
        cout<<"Error in opening file !"<<endl;
        return 1;
    }

    cout<<"\nEnter employee Details --->"<<endl;
    for(int i = 0 ; i < 3 ; i++)
    {
        //take data
        cout<<"Employee "<<i+1<<endl;

        cout<<"Enter Name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter ID: ";
        cin>>ID;
        cout<<"Enter Salary: ";
        cin>>salary;
        cout<<endl;

        //write data
        ofile<<name<<endl;
        ofile<<ID<<endl;
        ofile<<salary<<endl;
    }
    

    ofile.close(); //close file after writing.

//Again open for reading -->
    ofile.open("E:\\file5.txt", ios::in);
    
    //Error handle
    if(!ofile)
    {
        cout<<"\nError in opening file !"<<endl;
    }

    cout<<"\nReading employee records ----> ";
    for(int i = 0 ; i < 3 ; i++)
    {
        //Read data
        getline(ofile,name);
        ofile>>ID;
        ofile>>salary;
        ofile.ignore();

        //Display data
        cout<<"\nEmployee "<<i+1;
        cout<<"\nName = "<<name;
        cout<<"\nID = "<<ID;
        cout<<"\nSalary = "<<salary<<endl;
    }
    

    ofile.close();

    return 0;
}