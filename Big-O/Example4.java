class Example4
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
            for(int i=0;i <items2.length;i++)
            {
                System.out.println(items2[i]);
            }
        }
        
    }
}

//In 'Example2' the arrays were separate and now in here they are nested loops but still the size of the arrays of 'items' and 'items2' are different. So the Big-O of the above program would be O(a * b) as they are nested loops. If they were not nested like in 'Example2' then they would have a Big-O of O(a + b).

//This is Rule 3 of Big-O notations and it states that if we have different arrays which means different notations for each array because we dont know the length of each array. One easy way of understanding is that if any steps that happen in the same indentation, so one after another then we add O(a + b) like in 'Example2' and anything that happens with indentation that is nested we multiply O(a * b) like in Example3. So different inputs should have different variables.