class Logic
{
    void countDigits(int num)
    { 
        int iDigit = 0,iCount = 0;

        while(num > 0)
        {
            iCount++;
            num = num / 10;
        }
        
        System.out.println("Number of Digits: "+iCount);
    }   
}
class Program5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countDigits(7865);
    }
}