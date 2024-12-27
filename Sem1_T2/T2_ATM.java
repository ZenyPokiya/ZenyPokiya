import java.util.*;
class T2_ATM
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String dpass="1234";
       
        int attempt=0;
        System.out.print("Enter password:");
        String pass = sc.nextLine();
     
        while(true){
            if(attempt==3)
            {
                System.out.print("System is locked for 24 hrs");
                break;
            }
        
       else if(pass.equals(dpass)) {
            System.out.print("Wecome!");

        }

    }
    }
}