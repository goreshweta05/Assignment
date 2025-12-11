class Logic
{
    void findMin(int a,int b,int c)
    {
        if(a > b)
        {
            System.out.println("Maximum = "+a);
        }
        else if(b > a)
        {
            System.out.println("Maximum = "+b);
        }
        else
        {
            System.out.println("Maximum = "+c);
        }
    }
}
class Program4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findMin(3,7,2);
    }
}