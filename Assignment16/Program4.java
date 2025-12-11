class Logic
{
    void reverseNumber(int num)
    { 
        int iDigit = 0,iRev = 0;

        while(num > 0)
        {
            iDigit = num % 10;
            iRev = iRev * 10 + iDigit;
            num = num / 10;
        }
        
        System.out.println("Reverse of number: "+iRev);
    }   
}
class Program4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }
}