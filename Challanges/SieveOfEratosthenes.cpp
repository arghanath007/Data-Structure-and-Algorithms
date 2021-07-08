//Finding all of the Prime Numbers by removing all of the Non-prime numbers.

#include<bits/stdc++.h>

using namespace std;

void EratosthenesPrincipleOfPrime(int size)
{
    int* numbers=new int[size];
    for(int i=2; i<=size;i++)
    {
        numbers[i]=0;
    }
    for(int i=2;i<=size;i++) // We are starting from '2' as it is the 1st prime number.
    {
        if(numbers[i] ==0) // Checking if the element is unmarked. If it is '0' then unmarked. If it is true then we will go to that number's multiples and mark them all starting from the number's square.
        {
            for(int j=i*i;j<=size;j+=i) // we are using 'j+=i' because we want to find out all the multiples of 'i'. 
            {
                numbers[j]=1;  //'1' means they are marked.
            }
        }
    } 
    for(int i=2;i<=size;i++)
    {
        if(numbers[i] == 0)
        {
            cout<<i<<" "; // We want 'i' here and not numbers[i] as numbers[i] values are all zero(0) as they are unmarked.
        }
    }
    cout<<endl;
}

int main()
{
    int size;
    cout<<"Enter the range to find prime numbers: ";
    cin>>size;
    EratosthenesPrincipleOfPrime(size);
    return 0;
}