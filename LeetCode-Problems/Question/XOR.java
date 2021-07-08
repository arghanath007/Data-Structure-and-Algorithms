import java.util.*;

class XOR
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter two nos: ");
        int n=sc.nextInt();
        int m=sc.nextInt();

        int XOR= n^ m; //Still giving XOR
        System.out.println(XOR);
        // XOR= n ** m; //Doesn't work.
        System.out.println(XOR);
    }
}