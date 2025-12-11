class Logic
{
    void checkPalindrome(int num)
    {
        int iTemp = num,iDigit = 0,iRev = 0;
        while(num != 0)
        {
            iDigit = num % 10;
            iRev = iRev * 10 + iDigit;
            num = num / 10;
        }
        if(iTemp == iRev)
       {
         System.out.println(iTemp + " is Palindrome");
       }
       else
       {
        System.out.println(iTemp + "is not Palindrome");
       }
    }
}
class Program2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}