import java.util.*; 

class circle
{
	double Area;
	double Peri;
    
    void set(double r)
    {
		Area = 3.14*r*r;
		Peri= 2*3.14*r;
    }
	
	void display()
	{
		System.out.println("Area of circle is:"+Area);
		System.out.println("Perimeter of circle is:"+Peri);
		
	}
}

class Main
{
    public static void main(String args[])
    {
        Scanner sc =new Scanner(System.in);
		circle c=new circle();
		System.out.println("Enter radius:");
		double r=sc.nextDouble();
		c.set(r);
		c.display();
    }
}