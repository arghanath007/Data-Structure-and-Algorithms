class BigO
{
  public static void main(String[] args) 
  {
    String[] name=new String[]{"nemo"};

    findNemo(name);
  }

  public static void findNemo(String array[])
  { 
    for(int i=0;i<array.length;i++)
    {
        if(array[i] == "nemo")
        {
          System.out.println("Nemo Found!!!");
        }
    }
  }
}

//Big-O of the above function O(n);