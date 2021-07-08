#include<bits/stdc++.h>

using namespace std;

//Digit Root Problem.

int addDigit(int num)
{
    if(num == 0)
    {
        return 0;
    }
    else if(num % 9 == 0)
    {
        return 9;
    }
    else
    {
        return (num %9);
    }

    //One Liner of the above code
    //return 1 + (num - 1)%9;



    // Using Loop and Recursion

    // int number=num,sum=0,rem,count=0;
    // if(num == 0)
    // {
    //     return 0;
    // }
    // while(number!=0)
    // {
    //     rem= number%10;
    //     sum+=rem;
    //     count++;
    //     number/=10;
    // }
    // cout<<"sum= "<<sum<<"   Count= "<<count<<endl;
    // if(count >= 2)
    // {
    //     return addDigit(sum);
    // }
    // return sum;
}

int main()
{
    int digit;
    cout<<"Enter a digit: ";
    cin>>digit;
    cout<<"The Digit is: "<<addDigit(digit)<<endl;
}