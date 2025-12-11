class Logic
{
    void findSmallestDigit(int num)
    {
       int iSmallest = 9,iDigit = 0;

       while(num > 0)
       {
         iDigit =  num % 10;

        if(iDigit < iSmallest)
        
            iSmallest = iDigit;

            num = num / 10;
       }
        System.out.println("Smallest digit is : "+iSmallest);
       
    }
}
class Program5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}