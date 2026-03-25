import java.util.*;

class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Distance = 0;
        String Peak = null;
        double TotalFare = 0;

        System.out.println("Enter the distance in km");
        Distance = sobj.nextInt();

        System.out.println("Is it peak hours(Yes/No): ");
        Peak = sobj.next();
        
        if(Distance < 0)
        {
            System.out.println("Invalid Input: Distance cannot be negative");
        }

        TotalFare = 50;

        if(Distance <= 10)
        {
            TotalFare = TotalFare + (Distance * 12);
        }
        else
        {
            TotalFare = TotalFare + 120 + (Distance - 10) * 15;
        }
        if(Peak.equals("Yes"))
        {
            TotalFare = TotalFare + (TotalFare * 0.20);
        }
  
        System.out.println("Distance: " + Distance + " km");
        System.out.println("Peak Hour: " + Peak);
        System.out.println("Total Fare: ₹" + TotalFare);
    }
}