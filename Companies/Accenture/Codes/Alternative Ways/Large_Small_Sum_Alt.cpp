#include <iostream>
using namespace std;
int LargeSmallSum(int arr[], int length)
{
    int temp;
    int second_largest, second_smallest;
    if (length <= 3)
    {
        return 0;
    }
    else
    {
        // Implimenting sorting algorithm here
        // for (int i = 0; i < length - 1; i++)
        // {
        //     int min_index = i;
        //     for (int j = i + 1; j <= length - 1; j++)
        //     {
        //         if (arr[j] < arr[min_index])
        //         {
        //             min_index = j;
        //         }
        //     }
        //     if (min_index != i)
        //     {
        //         int temp = -1;
        //         temp = arr[i];
        //         arr[i] = arr[min_index];
        //         arr[min_index] = temp;
        //     }
        // }

        // Implementing sorting algorithm

        for (int i = 0; i < length - 1;i++)
        {
            for (int j = 0; j < length-i-1; j++)
            {
                // if (arr[j] < arr[j+1])  Descending order
                if (arr[j] > arr[j+1]) // Ascending Order.
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        if (length % 2 == 0)
        {
            second_largest = arr[length - 4];
            second_smallest = arr[length - 3];
        }
        else
        {
            second_largest = arr[length - 3];
            second_smallest = arr[length - 4];
        }
        return (second_largest + second_smallest);
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