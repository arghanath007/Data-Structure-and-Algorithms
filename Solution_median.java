import java.util.*;

class Solution_median {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n,m;
        // System.out.println("Enter the size of the two arrays: ");
        // n=sc.nextInt();
        // m=sc.nextInt();
        // int array1[]={1,2,3};
        // int array2[]={4,5};
        int array1[]={1,2,3,6};
        int array2[]={4,5};

        double median=findMedianSortedArrays(array1,array2);
        System.out.println(median);
    }

    public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m = nums1.length;
        int n = nums2.length;
        int[] arr = new int[m+n];
        System.out.println(arr.length);
        int i = 0, j = 0, k = 0;

        while(i < m && j < n)
        {
            if(nums1[i] <= nums2[j])
            {
                arr[k] = nums1[i];
                k++;
                i++;
            }
            else
            {
                arr[k] = nums2[j];
                k++;
                j++;
            }
        }
        while(i < m)
        {
            arr[k] = nums1[i];
            k++;
            i++;
        }
        while(j < n)
        {
            arr[k] = nums2[j];
            k++;
            j++;
        }

        double median = 0.0;
        if(arr.length%2 == 1)
        {
            median = arr[arr.length/2];
        }
        else
        {
            int index = arr.length/2 -1;
            median = (double)(arr[index] + arr[index+1])/2;
        }
        return median;
    }
}