import java.util.*;

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String helmet = null, license = null,overspeed = null;
        int fine = 0;

        System.out.println("Helmet worn (Yes/No): ");
        helmet = sobj.next();

        System.out.println("License available (Yes/No): ");
        license = sobj.next();

        System.out.println("Overspeeding (Yes/No): ");
        overspeed = sobj.next();

        if (isValid(helmet) == false || isValid(license) == false || isValid(overspeed) == false)
        {
            System.out.println("Invalid input: Enter Yes or No only");
            return;
        }

        if (helmet.equalsIgnoreCase("No"))
        {
            fine = fine + 500;
        }

        if (license.equalsIgnoreCase("No"))
        {
            fine = fine + 1000;
        }

        if (overspeed.equalsIgnoreCase("Yes"))
        {
            fine = fine + 1500;
        }

        System.out.println("Total Fine Amount: ₹" + fine);

        sobj.close();
    }

    public static boolean isValid(String ssobj)
    {
        if (ssobj.equalsIgnoreCase("Yes") || ssobj.equalsIgnoreCase("No"))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}