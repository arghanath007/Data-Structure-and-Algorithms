#include<bits/stdc++.h>

using namespace std;

int factorial(int number)
{
    int fact = 1;
    for (int i = 2; i <= number; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "The factorial is: " << factorial(num);
}