class Logic
{
    void checkPrime(int num)
    {
        boolean isPrime = true;
        int iCnt = 0;

        if(num <= 1)
        {
            isPrime = false;
        }
        else
        {
            for(iCnt = 2;iCnt <= num/2; iCnt++)
            {
                if(num % iCnt == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime)
        {
            System.out.println(num+ " is prime");
        }
        else
        {
            System.out.println(num+ " is not prime");
        }
    }
}
class Program1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}