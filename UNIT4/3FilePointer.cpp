#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int pos;
    char str[80];
    
    fstream ofile;

    //file opening for both read write and read
    // ios::trunc is used to clear old or create new file
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

    cout<<"\nCurrent position of get (Read pointer) : ";
    cout<<ofile.tellg();

    ofile.seekg(0, ios::cur); //bring pointer from current to begining
    
    cout<<"\nEnter the position to move from begining : ";
    cin>>pos;

    ofile.seekg(pos, ios::beg); //moves pointer from begining pos to given pos

    cout<<"\nThe position of the get (read pointer) is : ";
    cout<<ofile.tellg();

    ofile.seekp(pos , ios::beg);
    cout<<"\nThe position of the put (write pointer) is : ";
    cout<<ofile.tellp();

    ofile.getline(str,50);
    cout<<endl;
    cout<<"\nData read from file -> "<<str<<endl;

    ofile.close();

    return 0;
}