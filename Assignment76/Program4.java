import java.util.*;

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int budget = 0;
        int n = 0,i = 0;

        System.out.println("Enter Budget: ");
        budget = sobj.nextInt();

        System.out.println("Enter number of items: ");
        n = sobj.nextInt();

        if(budget >= 0 && n >= 0)
        {
            int count = 0;

            for(i = 0; i < n; i++)
            {
                System.out.println("Enter price of item " + (i + 1) + ": ");
                int price = sobj.nextInt();

                if(price > 0)
                {
                    if(budget >= price)
                    {
                        budget = budget - price;
                        count++;
                    }
                    else
                    {
                        break; 
                    }
                }
                else
                {
                    System.out.println("Invalid price");
                }
            }

            System.out.println("Items Purchased: " + count);
            System.out.println("Remaining Balance: ₹" + budget);
        }
        else
        {
            System.out.println("Invalid input");
        }
    }
}