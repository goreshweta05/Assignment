class Logic
{
    void printDivisibleBy2and3(int n)
    {
       int iCnt = 0;
       
       System.out.println("Number divisible by 2 and 3 is: \n");
       
       for(iCnt = 1;iCnt <= n ; iCnt++)
       {
        if(iCnt % 6 == 0)
        {
             System.out.print(iCnt+ "\t");
        }
       }
    }
}
class Program5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
    }
}