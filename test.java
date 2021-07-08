import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.Socket;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.net.ServerSocket;

public class server_calc 
{
    public static void main(String args[]) throws IOException
    {
        ServerSocket serv = new ServerSocket(4444);
        Socket s = serv.accept();

        DataInputStream dis = new DataInputStream(s.getInputStream());
        DataOutputStream dos = new DataOutputStream(s.getOutputStream());
        while(true)
        {
            String input = dis.readUTF();
            if(input.equals("EXIT") || input.equals("exit")){
                serv.close();
                break;
            }
            System.out.println("This is the Equation:- "+ input);
            StringTokenizer st = new StringTokenizer(input);
            float first_op = Float.parseFloat(st.nextToken());
            String operation = st.nextToken();
            float second_op = Float.parseFloat(st.nextToken());
            float result=0;
            if(operation.equals("+"))
                result = first_op + second_op;
            else if(operation.equals("-"))
                result = first_op - second_op;
            
            else if(operation.equals("*"))
                result = first_op * second_op;
            
            else if(operation.equals("/"))
                result = first_op/second_op;
            dos.writeUTF( Float.toString(result) );
            System.out.println("Result Sent >> ");

        }
    } 
    
}