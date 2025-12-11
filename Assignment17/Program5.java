class Logic
{
    void printTable(int num)
    {
        int iCnt = 0;

        for(iCnt = 1;iCnt <= 10 ; iCnt++)
        {
            System.out.println(num + "*" +iCnt+ "=" +num*iCnt);
        }
    }
}
class Program5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}