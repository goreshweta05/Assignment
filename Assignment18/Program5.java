class Logic
{
    void checkSign(int num)
    {
        if(num > 0)
        {
            System.out.println(num+ " is positive");
        }
        else if(num < 0)
        {
            System.out.println(num+ " is negative");
        }
        else
        {
            System.out.println(num+ " is Zero");
        }
        
    }
}
class Program5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}