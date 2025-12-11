class Logic
{
    void CheckEvenOdd(int num)
    { 
        if(num % 2 == 0)
        {
            System.out.println(+num +" is Even number");
        }
        else
        {
            System.out.println(+num + " is Odd number");
        }  
    }   
}
class Program2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckEvenOdd(7);
    }
}