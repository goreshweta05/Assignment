import java.util.*;

class Program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Percentage = 0;

        System.out.println("Enter Battery percentage");
        Percentage = sobj.nextInt();

        if(Percentage < 0 || Percentage > 100)
        {
            System.out.println("Inavlid input:Battery percentage can only betweeen 0-100");
            return;
        }

        if(Percentage <= 5)
        {
          System.out.println("status : Critical");
        }
        else if(Percentage <= 15)
        {
          System.out.println("Status : Low");
        }
        else
        {
          System.out.println("Status : Normal");
        }
       
         System.out.println("Battery percentage is: "+Percentage +"%");
    }
}