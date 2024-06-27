#include <stdio.h>
float area1()
{
	int a1;
	printf("side is:");
	scanf("%d",&a1);
	float area=a1*a1;
	return area;
}
void area()
{
	int a;
	printf("side is :");
	scanf("%d",&a);
	float area2=a*a;
	printf("area of square is %0.3f\n",area2);
}
	int main()
{
	float area2;
	area();
	area2=area1();
	printf("area is :%0.3f",area2);
}