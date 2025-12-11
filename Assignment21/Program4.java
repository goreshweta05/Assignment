class Logic
{
    void countFactors(int num)
    {
       int iCnt = 0,iCount = 0;
       
       for(iCnt = 1;iCnt <= num ; iCnt++)
       {
        if(num % iCnt == 0)
        {
             iCount++;
        }
       }
                System.out.println("Count of Factors is: \n"+iCount);
    }
}
class Program4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}