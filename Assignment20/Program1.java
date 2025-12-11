class Logic
{
    void sumEvenNumbers(int n)
    {
       int iCnt = 0,iEvenSum = 0;

       for(iCnt = 2 ;iCnt <= n;iCnt++)
       {
        if(iCnt % 2 == 0)
        {
            iEvenSum = iEvenSum + iCnt;
        }
       }
       System.out.println("Sum of all even numbers is: "+iEvenSum);
    }
}
class Program1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}