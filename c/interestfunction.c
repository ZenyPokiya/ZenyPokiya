#include<stdio.h>

float inter1(){
	int p,r,t;
	
	printf("p is:");
	scanf("%d",&p);
	printf("r is:");
	scanf("%d",&r);
	printf("t is:");
	scanf("%d",&t);
	float interest=p*r*t/100;
	return interest;
}
	void inter() 
{
	int p,r,t;
	printf("p is:");
	scanf("%d",&p);
	printf("r is:");
	scanf("%d",&r);
	printf("t is:");
	scanf("%d",&t);
	float interest=p*r*t/100;
	printf("interest is:%0.3f",interest);
}
int main(){
float interest;
		inter();
		interest=inter1();
		printf("interest is: %f",interest);
		return 0;
	}

