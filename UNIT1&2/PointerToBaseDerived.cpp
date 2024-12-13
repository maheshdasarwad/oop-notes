#include <iostream>
using namespace std;

class Animal
{
    public :
        void speak()
        {
            cout<<"\nAnimal speaks.";
        }
};

class Dog : public Animal
{
    public :
        void speak()
        {
            cout<<"\nDog braks.";
        }
};

int main()
{
    Animal animal ; Dog dog;
    Animal *aniptr = &animal;
    Dog *dogptr = &dog;
    
    aniptr -> speak();
    dogptr -> speak();
}