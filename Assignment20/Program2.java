class Logic
{
    void printReverse(int n)
    {
      int iCnt = 0;

      for(iCnt = n ;iCnt >=1 ; iCnt--)
      {
        System.out.println(iCnt + "");
      }
    }
}
class Program2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}