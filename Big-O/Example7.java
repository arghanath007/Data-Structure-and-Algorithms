class Example7
{
    public static void main(String[] args)
    {
        int n=10;
        String array[]=arrayOfHiNTimes(n);
        for(int i=0;i<n;i++)
        {
            System.out.println(array[i]);
        }
    }

    public static String[] arrayOfHiNTimes(int times)
    {
        String array[]=new String[times];
        for(int i=0;i<times;i++)
        {
            array[i]="hi";
        }
        return array;
    }
}

//The space complexity of the above program is Big-O of O(n) since we are creating a new String type array of size 'n' which is a data structure and adding memory so each item is an additional memory space on our computes 'n' times. We are ingoring the constant time of O(1) from the 'i' variable that we have created in the for loop according to the rules of Big-O.

//When it comes to space complexity we're either adding memory that we need to use and that's sometimes a big concern and sometimes there isn't and something that comes up a lot in interviews. There is a tradeoff between saving time and saving space. So we have to decide which one we're optimizing for.