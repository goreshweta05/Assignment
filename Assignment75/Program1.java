import java.util.*;

class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Hours = 0;
        int Amount = 0;

        System.out.println("Enter total parking hours: ");
        Hours = sobj.nextInt();

        if(Hours < 0)
        {
            System.out.println("Hours cannot be negative");
            return;
        }
        if(Hours <= 2)
        {
            Amount = 20;
        }
        else if(Hours > 2 && Hours <= 10)
        {
          Amount = 20 + (Hours - 2) * 10;
        }
        else
        {
           Amount = 20 + (Hours - 2) * 10 + 50;
        }
        System.out.println("Toatl parking duration: "+Hours);
        System.out.println("Total parking fee: "+Amount);
    }
}