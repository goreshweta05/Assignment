class Logic
{
    void countEvenOddRange(int n)
    {
       int iCnt = 0,iEvenCount = 0,iOddCount = 0;

       for(iCnt = 1; iCnt <= n;iCnt++)
       {
        if(iCnt % 2 == 0)
        {
            iEvenCount++;
        }
        else
        {
           iOddCount++;
        }
       }
       System.out.println("Even count = "+iEvenCount);
        System.out.println("Odd count = "+iOddCount);
    }
}
class Program2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}