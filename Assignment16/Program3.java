class Logic
{
    void findFactorial(int num)
    { 
        int iCnt = 0,iFact = 1;

        for(iCnt = 1;iCnt <= num;iCnt++)
        {
            iFact = iFact * iCnt ;
        }
        
        System.out.println("Factors of number is: "+iFact);
    }   
}
class Program3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }
}