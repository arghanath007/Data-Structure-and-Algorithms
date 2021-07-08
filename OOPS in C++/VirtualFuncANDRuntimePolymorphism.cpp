 #include<bits/stdc++.h>

 using namespace std;

class base
{
    public:
    virtual void print() // This is dynamically binding meaning at run-time when we gave it the address of the derived class after that it got binded with the address that we had give to it and then it executed the functions.
    {
        cout<<"This is the base class's print function: "<<endl;
    }
    void display()
    {
        cout<<"This is the base class's display function: "<<endl;
    }
};

class derived: public base
{
    public:
    void print()
    {
        cout<<"This is the derived class's print function: "<<endl;
    }
    void display()
    {
        cout<<"This is the derived class's display function: "<<endl;
    }
};


int main()
{
    base *basePtr;
    derived d;
    basePtr=&d;

    basePtr -> print();
    basePtr -> display();
}