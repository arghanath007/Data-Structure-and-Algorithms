// Dipanjan's solution

#include <iostream>
using namespace std;
// Building the function
int RatCountHouse(int r, int unit, int n, int arr[])
{
    int total = r * unit; // Total foods required for all rats
    int sum = 0;
    int i = 0;
    if (n == 0)
        return -1; // As it defines that the array is null
    else
    {
        for (i = 0; i <= n - 1; i++)
        {
            sum = sum + arr[i];
            if (sum >= total)
            {
                break;
            }
        }
        if (i == n)
            return 0; // As it defines that total amount of foods from all houses is not sufficient
        else
            return i + 1;
    }
}
int main()
{
    // Variables for number of rats, food for each rat and number of houses respectively
    int r, unit, n;
    // Array of sixe 'n', where each value of 'i' represents the number of foods in 'i+1'th house
    
    cout << "Enter the number of rats: ";
    cin >> r;
    cout << "Enter the number of foods required for each rat: ";
    cin >> unit;
    cout << "Enter the number of houses: ";
    cin >> n;
    int arr[n];
    cout << "Enter the number of foods in each house: ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    // Calling the function and showing the output
    cout << "Output: " << RatCountHouse(r, unit, n, arr);
    return 0;
}