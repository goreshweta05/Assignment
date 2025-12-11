class Logic
{
    void printOddNumbers(int n)
    {
        int iCnt = 0;

        for(iCnt = 1;iCnt <= n; iCnt++)
        {
          if(iCnt % 2 == 1)
        {
            System.out.println(iCnt);
        }
        }
        
    }
}
class Program3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}