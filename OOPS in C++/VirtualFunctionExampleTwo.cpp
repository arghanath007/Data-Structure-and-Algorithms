#include<iostream>

using namespace std;

//Base Class
class Animal
{
    public:
        virtual void eat()
        {
            cout<<"I am eating generic food: ";
        }
};

//Derived Class
class Cat: public Animal
{
    public:
        void eat()
        {
            cout<<"I am eating Cat food: ";
        }  
};

//Derived Class
class Dog: public Animal
{
    public:
        void eat()
        {
            cout<<"I am eating Dog food: ";
        }  
};

void AnimalFunction(Animal *animalPtr)
{
    animalPtr->eat();
}

int main()
{
    Animal *ptr;
    Cat catObj;
    Dog dogObj;

    ptr=&catObj;
    AnimalFunction(ptr);

    cout<<"\n";
    
    ptr=&dogObj;
    AnimalFunction(ptr);
}

//If 'virtual function' concept was not there then we would had to create the standalone 'AnimalFunction(Animal *animalPtr)' three times, one for the generic Animal class, one for the 'cat' class and one for the 'dog' class for all of the functionality that the function would be doing here, we are calling the 'eat()'. Since we have this virtual function concept that why, we can call the 'eat()' of any of the classes whether it is cat,dog or the Animal class itself just by writing the standalone 'AnimalFunction(Animal *animalPtr)' function once.