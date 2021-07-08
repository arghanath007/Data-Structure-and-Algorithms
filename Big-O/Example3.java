class Example3
{
    public static void main(String[] args)
    {
        // int array[]={1,2,3,4,5};
        String array[]={"a","b","c","d","e"};
        // for(int i=0;i< array.length;i++)
        // {
        //     System.out.println(array[i]);
        // }
        String value;
        int count=0;
        for(int i=0;i<array.length;i++)
        {
            value=array[i];
            for(int j=0;j< array.length;j++)
            {
                System.out.println("(" + array[i] + " , " +  array[j] + ")" + "count= " + count++);
            }
        }

    }
}

//If we see nested for loops in an interview question that means instead of having two for loops one after another where we use addition(+) like in 'Example2.java'. When we see loops that are nested we use multiplication(*). So the Big-O of the above program becomes 
// O(n*n) = O(n^2) for nested for loops. 
//O(n^2) -> Quadratic Time.