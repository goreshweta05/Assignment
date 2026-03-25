import java.util.*;

class Program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int age = 0,creditScore = 0;
        String hasLoan = null;

        System.out.println("Enter your age: ");
        age = sobj.nextInt();

        System.out.println("Enter your monthly income: ");
        double income = sobj.nextDouble();

        System.out.println("what's your credit score: ");
        creditScore = sobj.nextInt();

        System.out.println("Are you taking existing unpaid loan: ");
        hasLoan = sobj.next();

        if (age < 0 || income < 0 || creditScore < 0)
        {
            System.out.println("Invalid input: Values cannot be negative");
            return;
        }

        if (!(hasLoan.equalsIgnoreCase("Yes") || hasLoan.equalsIgnoreCase("No")))
        {
            System.out.println("Invalid input: Loan status must be Yes or No");
            return;
        }

        if(age < 21 || age > 60) 
        {
            System.out.println("Loan Rejected: Age not eligible");
        }
        else if(income <= 25000) 
        {
            System.out.println("Loan Rejected: Income too low");
        }
        else if (creditScore <= 700) 
        {
            System.out.println("Loan Rejected: Credit score too low");
        }
        else if (hasLoan.equalsIgnoreCase("Yes")) 
        {
            System.out.println("Loan Rejected: Existing unpaid loan");
        }
        else 
        {
            System.out.println("Loan Approved");
        }

        sobj.close();
    }

}
      
        
