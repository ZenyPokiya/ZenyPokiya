#include <stdio.h>
float area1()
{
	int l,b;
	printf("length is:");
	scanf("%d",&l);
	printf("breadth is:");
	scanf("%d",&b);
	float area=l*b;
	return area;
}
void area()
{
	int l,b;
	printf("length is :");
	scanf("%d",&l);
	printf("breadth is:");
	scanf("%d",&b);
	float area2=l*b;
	printf("area of rectangle is %0.3f\n",area2);
}
	int main()
{
	float area2;
	area();
	area2=area1();
	printf("area is :%0.3f",area2);
}