import java.util.Scanner;

class Program2
{
    public static void main(String A[]) 
    {
        Scanner sc = new Scanner(System.in);

        int marks = 0,attendance = 0,income = 0;

        System.out.print("Enter marks percentage: ");
        marks = sc.nextInt();

        System.out.print("Enter attendance percentage: ");
        attendance = sc.nextInt();

        System.out.print("Enter family income (₹): ");
        income = sc.nextInt();

        if (marks < 0 || marks > 100)
        {
            System.out.println("Invalid input: Marks must be between 0 and 100");
            return;
        }
        if (attendance < 0 || attendance > 100)
        {
            System.out.println("Invalid input: Attendance must be between 0 and 100");
            return;
        }
        if (income < 0) 
        {
            System.out.println("Invalid input: Family income cannot be negative");
            return;
        }

        if (marks >= 80 && attendance >= 75 && income <= 300000) 
        {
            System.out.println("Scholarship Approved");
        } 
        else 
        {        
           String reason = null;
            if (marks < 80) 
            {
                reason = "Marks below 80%";
            } 
            else if (attendance < 75) 
            {
                reason = "Attendance below 75%";
            } 
            else
            {
                reason = "Family income exceeds ₹3,00,000";
            }
            System.out.println("Scholarship Rejected: " + reason);
        }
    }
}