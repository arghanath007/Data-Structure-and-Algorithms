#include<bits/stdc++.h>

using namespace std;

int NumberOfCarries(int num1, int num2)
{
    int rem1, rem2,count=0,carry=0,sum;
    int number1=num1, number2=num2;
    while(number1!=0 && number2!=0)
    {
        rem1=number1%10;
        rem2=number2%10;

        sum = rem1 + rem2 + carry;

        if(sum >=10)
        {
            count++;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        number1/=10;
        number2/=10;
    }
    return count;
}

int main()
{
    int num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"The number of carries is: "<<NumberOfCarries(num1, num2);
    return 0;
}