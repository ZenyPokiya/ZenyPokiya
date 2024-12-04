
//54321
 //4321
  //321
   //21
    //1
import java.util.*;
class PB_292
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter n number of rows:");
        int n = sc.nextInt();
        int i=0,j=0;
        for(i=n;i>=1;i--)
        {
            for(j=n;j>=1;j--)
            {
                if(i>=j)
                {
                    System.out.print(j);
                }
                else
                {
                    System.out.print(" ");
                }
           
            }
           System.out.println();
        }
    }
}