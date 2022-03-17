#include <iostream>
using namespace std;
// Function for sorting an array
void Sort_Array(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            int temp = -1;
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
}
int LargeSmallSum(int arr[], int length)
{
    if (length <= 3)
    {
        return 0;
    }
    else
    {
        int even_array[length];
        int odd_array[length];
        int k = 0, j = 0;
        even_array[k] = arr[0];
        k += 1;
        for (int i = 1; i <= length - 1; i++)
        {
            if (i % 2 == 0)
            {
                even_array[k] = arr[i];
                k += 1;
            }
            else
            {
                odd_array[j] = arr[i];
                j += 1;
            }
        }
        int *a1 = &even_array[0];
        int *a2 = &odd_array[0];
        Sort_Array(a1, k); // Sorting even array
        Sort_Array(a2, j); // Sorting odd array
        // Finding the second largest and second smallest from the numbers of even and odd position respectively
        int m, n;
        for (m = k - 2, n = 1; m >= 0 && n <= j - 1; m--, n++)
        {
            if (even_array[m] != even_array[k - 1] && odd_array[n] != odd_array[0])
            break;
        }
        return (even_array[m] + odd_array[n]);
    }
}
int main()
{
    int length;
    cout << "Enter the length: ";
    cin >> length;
    int arr[length];
    cout << "Enter " << length << " elements of the array: ";
    for (int i = 0; i <= length - 1; i++)
    {
        cin >> arr[i];
    }
    // Calling the function and showing the output
    cout << "Output: " << LargeSmallSum(arr, length);
    return 0;
}