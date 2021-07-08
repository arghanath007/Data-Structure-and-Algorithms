#include<bits/stdc++.h>

using namespace std;

int sumBase(int n, int k) 
{
    int result=0;
    while(n > 0)
    {
        result+=n%k;     //(1)Getting the remainder.
        n/=k;           //(2)Quotient
    }
    return result;
}

int main()
{
    int number, base;
    cout<<"Enter the number to be converted: ";
    cin>>number;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"The sum is: "<<sumBase(number,base);  
}

// The general steps for converting a base 10 or "normal" number into another base are:

//First, divide the number by the base to get the remainder. This remainder is the first, i.e. least significant(from left), digit of the new number in the other base
//Then repeat the process by dividing the quotient of step 1, by the new base. This time, the remainder is the second digit, i.e. the second least significant.
//Repeat this process until your quotient becomes less than zero(0). This quotient is the last digit(from right), i.e. the most significant digit.

//So here, instead of creating the number, we are adding up the remainders so as to get the result directly.