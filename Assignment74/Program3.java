import java.util.*;

class Program3
{
public static void main(String A[])
{
    Scanner sobj = new Scanner(System.in);

    int marks[] = new int[5];
    int i = 0;
    int iSum = 0;

    boolean pass = true;
    boolean invalid = false;

    System.out.println("Enter marks: ");

    for(i = 0;i < marks.length;i++)
    {
      marks[i] = sobj.nextInt();
      if(marks[i] < 35)
    {
        pass = false;
    }
    if(marks[i] < 0 || marks[i] > 100)
    {
        invalid = true;
    }
    iSum = iSum + marks[i];
    }

    if(invalid == true)
    {
    System.out.println("Invalid marks");
    return;
    }
    if(pass == false)
    {
    System.out.println("Result : fail");
    return;
    }

    float Average = ((float)iSum / (float)5);

    System.out.println("Average marks: "+Average);

    if(Average >= 75.0f)
    {
      System.out.println("Final result : Distinction");
    }
    else if(Average >= 60.0f)
    {
      System.out.println("Final result : First class");
    }
    else if(Average >= 50.0f)
    {
      System.out.println("Final result : Second class");
    }
    else if(Average < 50.0f)
    {
      System.out.println("Final result : Pass");
    }
    sobj.close();
}
   
}