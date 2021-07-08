class Example2
{
    public static void main(String args[])
    {
        int items[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
        int items2[]={1,2,3,4,5,6,7,8,9,10};
        printFirstItemThenFirstHalfThenSayHi100Times(items,items2);
    }

    public static void printFirstItemThenFirstHalfThenSayHi100Times(int items[],int items2[])
    {
        for(int i=0;i <items.length;i++)
        {
            System.out.println(items[i]);
        }
        for(int i=0;i <items2.length;i++)
        {
            System.out.println(items2[i]);
        }
    }
}

//Big-O of the above program is not going to be O(n) because the length of 'items' is 13 and the length of 'items2' is 10 so the length of both of the arrays is different so we can't simply just put the Big-O of the program as O(n). Let 'a' be the length of the 'items' array and 'b' be the length of the 'items2' array. So the Big-O of the above program will be       O(a + b). We can represent the lengths of the arrays with anything. This is following the Rule 3 of the Big-O notations.
    //So keep that in mind just because we see two for loops one after another doesn't mean that they're looping over the same items.