class Logic
{
    void printEvenNumbers(int n)
    {
        int iCnt = 0;

        for(iCnt = 2;iCnt <= n; iCnt++)
        {
          if(iCnt % 2 == 0)
        {
            System.out.println(iCnt);
        }
        }
        
    }
}
class Program2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}