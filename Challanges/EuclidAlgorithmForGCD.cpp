#include<bits/stdc++.h>

using namespace std;

int gcd(int numberOne, int numberTwo)
{
    while(numberTwo!=0)
    {
        int rem= numberOne%numberTwo;
        numberOne=numberTwo;
        numberTwo=rem;
    }
    return numberOne; 
}

int main()
{
    int numberOne, numberTwo;
    cout<<"Enter two numbers to find GCD between them: ";
    cin>>numberOne>>numberTwo;
    cout<<"The GCD is: "<<gcd(numberOne,numberTwo)<<endl;
    return 0;
}