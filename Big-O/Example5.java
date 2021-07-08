class Example5
{
    public static void main(String[] args)
    {
        int array[]={1,2,3,4,5};
        printAllNumbersThenAllPairSums(array);
    }

    public static void printAllNumbersThenAllPairSums(int array[])
    {
        System.out.println("These are the numbers");
        for(int i=0; i< array.length;i++)
        {
            System.out.println(array[i]);
        }
        System.out.println("These are the sum of the numbers");
        for(int i=0; i< array.length;i++)
        {
            for(int j=0; j< array.length;j++)
            {
                System.out.println(array[i] + array[j]);
            }
        }
    }
}

//In this we have a for loop followed by a nested for loops. So for the 1st for loop the Big-O is O(n) and for the nested for loops the Big-O is O(n^2). As the one for loop and the nested for loops are separate from each other so we will use the '+' sign here so Big-O will be O(n + n^2). But the rule 4 of Big-O says that we have to drop the non-dominant terms so as the size of the input(n) increases the significance of 'n' decreases so we drop it and the Big-O finally becomes O(n^2). We worry about the most dominant term because 'n^2' is the most significant. 
// We're only worried about scale here so we drop everything else and we can just ignore it completely. 
// If we have 3 loops like below which are nested within each other then the Big-O of that would be     O(n^3).

// for(int i=0; i< array.length;i++)
// {
//     for(int j=0; j< array.length;j++)
//     {
//         for(int k=0; k< array.length;k++)
//         {
//             System.out.println(array[i] + array[j] + array[k]);
//         }
//     }
// }