class Example1
{
    public static void main(String args[])
    {
        int items[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
        printFirstItemThenFirstHalfThenSayHi100Times(items);
    }

    public static void printFirstItemThenFirstHalfThenSayHi100Times(int items[])
    {
        System.out.println(items[0]);

        int middleIndex=(int)Math.floor(items.length/2);
        int index=0;

        while(index < middleIndex)
        {
            System.out.println(items[index]);
            index++;
        }

        for(int i=0;i < 100;i++)
        {
            System.out.println("Yo");
        }
    }
}

//Big-O of the above program is O(n) still.