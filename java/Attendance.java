import java.util.*;


class Main
{
	public static void main(String args[])
	{
		boolean b[]=new boolean[3];
		
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter student id:");
		int stid=sc.nextInt();
		System.out.println("Enter student name:");
		String stname=sc.next();
		System.out.println("Student id:"+stid);
		System.out.println("Student name:"+stname);
		System.out.println("Day 1 attendance:");
		b[0]= sc.nextBoolean();
		System.out.println("Day 2 attendance:");
		b[1]= sc.nextBoolean();
		System.out.println("Day 3 attendance:");
		b[2]= sc.nextBoolean();
		int c=0;
		for(int i=0;i<b.length;i++)
		{
			if(b[i]==true)
			{
				c++;
			}
		}
		if(c==1)
		{
			System.out.println("Attendance percentage:"+(1*100)/3);
		}
		else if(c==2)
		{
			System.out.println("Attendance percentage:"+(2*100)/3);
		}
		else if(c==3)
		{
			System.out.println("Attendance percentage:"+(3*100)/3);
		}
		else 
		{
			System.out.println("Error");
		}
	
	}
	
}