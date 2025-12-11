class Logic
{
    void findLargestDigit(int num)
    {
       int iLargest = 0,iDigit = 0;

       while(num > 0)
       {
         iDigit =  num % 10;

        if(iDigit > iLargest)
        
            iLargest = iDigit;

            num = num / 10;
       }
        System.out.println("Largest digit is : "+iLargest);
       
    }
}
class Program4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}