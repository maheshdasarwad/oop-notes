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

    // remove("E:\\file1.txt"); <---- delete a file

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