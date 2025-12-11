class Logic
{
    void printDigits(int num)
    {
        int iRev = 0,iDigit = 0;

       while(num != 0)
       {
         iDigit = num % 10;
         iRev = iRev * 10 + iDigit;
         num = num / 10;
       }
       while(iRev != 0)
       {
        iDigit = iRev % 10;
        System.out.println(iDigit);
        iRev = iRev / 10;
       }
    }
}
class Program4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printDigits(9876);
    }
}