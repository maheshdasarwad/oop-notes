/* 
    Define a class Person with three attributes:
                            name, gender, and age. 
    Write a C++ program that writes an object to a file and reads an object from a file.
*/

#include <iostream>
#include <fstream>
using namespace std;

class person 
{
    private :
        int age;
        string name;
        string gender;
    public :
        person(int a, string b, string c)
        {
            age = a;
            name = b;
            gender = c;

          
        }

        void write()
        {
            fstream fobj;
            fobj.open("E:\\mahi.txt", ios::out | ios::trunc);
            if(!fobj)
            {
                cout<<"\nError in opening file."<<endl;
                return;
            }

            fobj<<age<<"\n";
            fobj<<name<<"\n";
            fobj<<gender<<"\n";

            fobj.close();

            cout<<"File writing successfull..."<<endl;
        }

        void read()
        {
            fstream fobj;
            fobj.open("E:\\mahi.txt",ios::in);

            fobj<<age;
            getline(fobj,name);
            getline(fobj,gender);

            cout<<"Age = "<<age<<endl;
            cout<<"Name = "<<name<<endl;
            cout<<"Gender = "<<gender<<endl;
            
            fobj.close();

            cout<<"File Reading successfull...."<<endl;
        }
};

int main()
{
    int age;
    string name;
    string gender;

    cout<<"\nEnter your age : ";
    cin>>age;

    cout<<"\nEnter your name : ";
    cin.ignore();
    getline(cin,name);

    cout<<"\nEnter your gender : ";
    cin>>gender;

    person obj(age,name,gender);

    obj.write();
    obj.read();
}

