import java.util.*;

class Program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Weight = 0,Amount = 0;

        System.out.println("Enter parcel weight in kg");
        Weight = sobj.nextInt();

        if(Weight < 0)
        {
            System.out.println("Inavlid input: weight cannot be zero");
            return;
        }

        if(Weight <= 1)
        {
            Amount = 50;
        }
        else if(Weight <= 5)
        {
           Amount = 50 + (Weight - 1) * 20;
        }
        else
        {
            Amount = 150 + (Weight - 5) * 30;
        }
         System.out.println("Parcel weight is: "+Weight);
         System.out.println("Courier charges: "+Amount);
    }
}