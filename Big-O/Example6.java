class Example6
{
    public static void main(String[] args)
    {
        int array[]={1,2,3,4,5};
        SpaceComplexity(array);
    }

    public static void SpaceComplexity(int array[])
    {
        for(int i=0;i< array.length;i++)
        {
            System.out.println(array[i]);
        }
    }
}

//The Time complexity is Big-O of O(n). 

//The one gotcha when it comes to space complexity is that we are talking about additional space so we don't include space taken up by the inputs. So we don't really care how big the input is. We do care but when it comes to the above function we dont really have a control over w hat sort of input it receives. We only have control of what happends inside of this function. So within that function are we adding any space, not really we are just creating the variable 'i' of the for loop. Other than that we're not really adding any more memory. So, the Space complexity of the above program is Big-O of O(1).