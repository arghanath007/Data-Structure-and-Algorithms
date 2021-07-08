#include<bits/stdc++.h>

using namespace std;

int main()
{
    int numberOne, numberTwo;
    cout<<"Enter two numbers: ";
    cin>>numberOne>>numberTwo;
    int XOR=numberOne ^ numberTwo; 
    cout<<XOR<<endl;    
    // double power= 2**2; Doesn't work in c++.
}

// XOR(^) 
// Same numbers -> 0
//Different Numbers -> 1