class Logic
{
    void productOfDigits(int num)
    {
       int iDigit = 0,iProduct = 1;

       while(num > 0)
       {
        iDigit = num % 10;
        iProduct = iProduct * iDigit;
        num = num / 10;
       }
       System.out.println("Product of digits = "+iProduct);
    }
}
class Program1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}