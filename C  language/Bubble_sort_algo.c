#include <stdio.h>
#include <stdlib.h>
int greater(int a,int b)
{
    int p=(a>b)?1:0;
    return p;
}
int main()
{
    // Making of an array and showing it before sorting
    int *arr = (int *)malloc(10 * sizeof(int));
    int num, temp;
    printf("Enter the number of values you want to put in array (It must be less than or equals to 10)\n");
    scanf("%d", &num);
    printf("Enter %d values:\n", num);
    for (int i = 0; i <= num - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Your array is:\n");
    for (int i = 0; i <= num - 1; i++)
    {
        printf("%d\t", arr[i]);
    }
    // Doing the Bubble sort on our array
    for (int j = 0; j < num - 1; j++)
    {
        if (greater(arr[j], arr[j + 1]))
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
        else
        {
            continue;
        }
        for (int k = j; k > 0; k--)
        {
            if (greater(arr[k - 1], arr[k]))
            {
                temp = arr[k - 1];
                arr[k - 1] = arr[k];
                arr[k] = temp;
            }
            else
            {
                continue;
            }
        }
    }
    // Showing the array after Bubble Sort
    printf("\nYour array after sorting:\n");
    for (int i = 0; i <= num - 1; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}