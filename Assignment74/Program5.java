import java.util.*;

class Program5
{
public static void main(String A[])
{
    Scanner sobj = new Scanner(System.in);
   
    int Amount = 0;
    
    float DiscountAmount = 0.0f;
    float FinalAmount = 0.0f;

    String MembershipType = null;

    System.out.println("Enter purchase amount: ");
    Amount = sobj.nextInt();

    System.out.println("Enter Membership type: (Premium/Regular)");
    MembershipType = sobj.nextLine();

    if
    (
        (Amount < 0) || 
        (MembershipType.equalsIgnoreCase("Premium") == false) ||
        (MembershipType.equalsIgnoreCase("Regular") == false)
    )
    {
       System.out.println("Invalid input");
       return;
    }
    if(MembershipType.equalsIgnoreCase("Premium"))
    {
        DiscountAmount = 5;
    }
    if(Amount > 5000)       //20%
    {
      DiscountAmount = Amount * 0.2f;
    }
    else if(Amount > 2000)    //10%
    {
       DiscountAmount = Amount * 0.1f;
    }
    else                    //0%
    {
       DiscountAmount = 0.0f;
    }

    FinalAmount = Amount - DiscountAmount;

    if(MembershipType.equalsIgnoreCase("Premium"))
    {
      DiscountAmount = DiscountAmount + (FinalAmount * 0.05f);
      FinalAmount = FinalAmount - DiscountAmount;
    }

    System.out.println("Original Amount: ₹"+Amount);
    System.out.println("Total Discount: ₹"+DiscountAmount);
    System.out.println("Final Payable Amount: ₹"+FinalAmount);

   sobj.close();
}
   
}