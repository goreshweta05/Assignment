class Logic
{
    void calculatePower(int base , int exp)
    {
       int iResult = 1, iCnt = 0;

       for(iCnt = 1; iCnt <= exp ; iCnt++)
       {
         iResult = iResult * base ;  
       }   
       System.out.println("Result : "+iResult); 
    }
}
class Program5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2,5);
    }
}