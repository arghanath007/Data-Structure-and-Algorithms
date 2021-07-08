#include<bits/stdc++.h>

using namespace std;

bool palindrome(int number)
{
    if(number < 0 || (number !=0 && number %10 ==0))
    {
        return false;
    } 
    int rev=0;
    while(number > rev)
    {
        rev= rev*10 + number%10;
        number/=10;
    }
    return (number == rev || number == (rev/10)); 
    //number == (rev/10) -> For odd numbers
    //number == rev -> For Even numbers
}

int main()
{
    int number;
    cout<<"Enter a number to check palindrome: ";
    cin>>number;
    bool result= palindrome(number);
    if(result)
    {
        cout<<"Palindrome Number: ";
    }
    else
    {
        cout<<"Not a Palindrome Number: ";
    }
}