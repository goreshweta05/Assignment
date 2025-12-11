class Logic
{
    void checkLeapYear(int n)
    {
        if((n % 400 == 0 && n % 100 != 0) || n % 4 == 0 )
        {
             System.out.println(n+ " is a leap year");
        }
        else
        {
            System.out.println(n+ " is not a leap year");
        }
    }
}
class Program1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}