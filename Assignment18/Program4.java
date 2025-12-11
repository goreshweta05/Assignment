class Logic
{
    void SumEvenOddDigits(int num)
    {
        int iEvenSum = 0,iOddSum = 0;

        while(num != 0)
        {
            int iDigit = num % 10;

            if(iDigit % 2 == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }
            num = num / 10;
        }
        System.out.println("sum of even number is :"+iEvenSum);
        System.out.println("Sum of odd number is: "+iOddSum);
        
    }
}
class Program4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.SumEvenOddDigits(123456);
    }
}