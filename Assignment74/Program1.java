import java.util.*;

class Program1
{
    public static void main(String A[])
    {
       int TotalDays = 0;
       int fine = 0;

       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number of days: ");
       TotalDays = sobj.nextInt();

       if(TotalDays < 0)
       {
        System.out.println("Invalid input");
        return;
       }
       if(TotalDays <= 7)
       {
        System.out.println("No fine applicable");
        return;
       }
       else if(TotalDays >= 8 && TotalDays <= 12)
       {
        fine = (TotalDays - 7) * 5;
       }
       else if(TotalDays > 12)
       {
         fine = (5 * 5) + ((TotalDays - 12) * 10);
       }
       System.out.println("Total fine to be paid: "+fine);
    }
}