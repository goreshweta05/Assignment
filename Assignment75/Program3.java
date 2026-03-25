import java.util.*;

class Program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int stock = 0, quantity = 0;

        System.out.println("Enter current stock: ");
        stock = sobj.nextInt();

        System.out.println("Enter requested quantity: ");
        quantity = sobj.nextInt();


        if (stock < 0)
        {
            System.out.println("Invalid input: Stock cannot be negative");
            return;
        }

        if (quantity < 0)
        {
            System.out.println("Invalid input: Quantity must be greater than 0");
            return;
        }

        if (quantity > stock)
        {
            System.out.println("Order Failed: Insufficient Stock.");
        }
        else
        {
            stock = stock - quantity;
            System.out.println("Order Processed Successfully.");
            System.out.println("Remaining Stock: " + stock);

            if (stock < 5)
            {
                System.out.println("Low Stock Alert!");
            }
        }
        sobj.close();
    }
}