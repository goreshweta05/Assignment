class Logic
{
    void displayFactors(int num)
    {
       int iCnt = 0;
       System.out.println("Factors of number is: \n");
       
       for(iCnt = 1;iCnt <= num / 2 ; iCnt++)
       {
                System.out.println(+iCnt);
       }
    }
}
class Program3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}