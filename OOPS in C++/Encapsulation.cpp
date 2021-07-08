#include<bits/stdc++.h>

using namespace std;

class encapsulation
{
    public: 
    int a;
    void functionA()
    {
        cout<<"Function of A: ";
    }
    protected: 
    int b;
    void functionB()
    {
        cout<<"Function of B: ";
    }
    private: 
    int c;
    void functionC()
    {
        cout<<"Function of C: ";
    }
};

int main()
{
    encapsulation A,B,C;
    A.functionA();
    // B.functionB(); // Gives Error
    // C.functionC(); //Gives error.
}