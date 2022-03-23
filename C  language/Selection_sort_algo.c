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
// Function for checking the min between two numbers
int minimum(int a, int b)
{
    int x = (a < b) ? 1 : 0;
    return x;
}
// Function for doing the Selection sort
void selectionsort(int *j, int k)
{
    int temp, z, l, min, pol;
    min = j[0];
    // Loop for number of passes
    for (z = 0; z < k - 1; z++)
    {
        for (l = z; l < k - 1; l++)
        {
            if (minimum(min, j[l + 1]))
            {
                continue;
            }
            else
            {
                min = j[l + 1];
                pol = l + 1;
            }
        }
        if (min == j[z])
        {
            min = j[z + 1];
        }
        else
        {
            temp=j[z];
            j[z]=j[pol];
            j[pol]=temp;
            min = j[z + 1];
        }
    }
    printf("Total number of passes:%d\n",z);
}
int main()
{
     // Declaring and Initializing of an array
    int arr[] = {8,0,7,1,3};
    int length = 5;
    // Printing the array before sorting
    printf("The array before sorting:\n");
    printArray(arr, length);
    // Doing the Selection sort by this function
    selectionsort(arr,length);
    // Printing the array after sorting
    printf("The array after sorting:\n");
    printArray(arr, length);

    return 0;
}