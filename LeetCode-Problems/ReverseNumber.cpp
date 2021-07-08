#include<bits/stdc++.h>

using namespace std;

int reverse(int x)
{
    int rev=0;
    while(x!=0)
    {
        int digit= x%10;
        int newRev= rev*10 + digit;
        if((newRev - digit)/10 != rev) //Overflow check. If overflow then return 0.
        {
            return 0;
        }
        else
        {
            rev= newRev;
            x/=10;   
        }
    }
    return rev;


    // We are using long long int for checking the overflow condition.

    // long long res = 0;
    // while(x) {
    //     res = res*10 + x%10;
    //     x /= 10;
    // }
    // return (res<INT_MIN || res>INT_MAX) ? 0 : res;
}

int main()
{
    int number;
    cout<<"Enter a number to be reversed: ";
    cin>>number;
    cout<<reverse(number);
}