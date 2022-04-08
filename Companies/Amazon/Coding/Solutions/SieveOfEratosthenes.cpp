#include<bits/stdc++.h>

using namespace std;


void printPrime(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime)); // 'true' is the character to copy. 'n' is the number of times the character is to be copies. 'prime' is the object to which the character is to be copied 'n' number of times. 1st part is the object where the copying will be stored, 2nd is the value which is to be copied to the 1st part and 3rd is the count of the number of times, the 2nd value is to be copied into the 1st value.
    for (int i = 2; i * i <= n;i++) // Were using powers of numbers to save on computation/iteration resources.
    {
        if(prime[i] == true)
        {
            for (int j = i * i; j <= n;j+=i)
            {
                prime[j] = false; // 'false' means they are marked by the algorithm and they are not prime numbers.
            }
        }
    }
    cout << "The prime numbers are: ";
    for (int i = 2; i <= n;i++)
    {
        if(prime[i])
        {
            cout << i<<" ";
        }
    }

}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printPrime(n);
}


// Time Complexity: O(n*log(log(n)))

// Auxiliary Space: O(n)

// Memset -> https://www.geeksforgeeks.org/memset-in-cpp/