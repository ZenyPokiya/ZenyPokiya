import java.util.*;
class fan
{
    int slow=1;
    int medium=2;
    int fast=3;
    int speed;
    boolean fon;
    double radius;
    String colour;

    void defaultfan()
    {
       speed=slow;
       fon=true;
       radius=4;
       colour="blue";
    }

    void fan(int a,boolean b,double c,String d)
    {
        speed=a;
        fon=b;
        radius=c;
        colour=d;
    }

    void display()
    {
        if(fon==true)
        {
            System.out.println("Fan is on");
            System.out.print("Speed:"+speed+"\n"+"Radius:"+radius+"\n"+"Radius:"+radius+"\n"+"Colour:"+colour);
        }
        else
        {
            System.out.print("Fan is off");
        }
    }
}

class Main
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        fan f=new fan();
        f.defaultfan();
        f.display();
        f.fan(3,false,4,"blue");
        f.display();
        f.fan(4,true,8,"pink");
        f.display();
    }
}