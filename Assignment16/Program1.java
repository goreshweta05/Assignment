class Logic
{
    void CalculateSum(int n)
    { 
        int iCnt = 0,iSum = 0;
       
       for(iCnt = 1; iCnt <= n ;iCnt++)
       {
         iSum = iSum + iCnt;
       }
        System.out.println("Sum = "+iSum);
    }
    
}
class Program1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CalculateSum(10);
    }
}