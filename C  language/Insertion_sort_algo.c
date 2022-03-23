#include <stdio.h>
// Function for printing an array
void printArray(int *a, int b)
{
    for (int i = 0; i <= b - 1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
// Function for checking the max between two numbers
int max(int a, int b)
{
    int x = (a > b) ? 1 : 0;
    return x;
}
// Function for doing the Inseryion sort
void insertionsort(int *j, int k)
{
    int temp, z;
    // Loop for the number of passes
    for (z = 0; z < k - 1; z++)
    {
        for (int l = z + 1; l > 0; l--)
        {
            if (max(j[l - 1], j[l]))
            {
                temp = j[l - 1];
                j[l - 1] = j[l];
                j[l] = temp;
            }
            else
            break;
        }
    }
    printf("Total number of passes:%d\n", z);
}
int main()
{
    // Declaring and Initializing of an array
    int arr[] = {2, 18, 5, 32, 16, 7};
    int length = 6;
    // Printing the array before sorting
    printf("The array before sorting:\n");
    printArray(arr, length);
    // Doing the Insertion sort by this function
    insertionsort(arr,length);
    // Printing the array after sorting
    printf("The array after sorting:\n");
    printArray(arr, length);

    return 0;
}