#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("Value of a:");
	scanf("%d",&a);
	printf("Value of b:");
	scanf("%d",&b);
	printf("Value of c:");
	scanf("%d",&c);
	if(a>b)
	{
	if(b>c)
	{ 	
		printf("a is large");}
	else{
		printf("a is large");}
	}
	else {
	if (b>c){
		printf("b is large");}
	else {
		printf("c is large");}
	}
		return 0 ;
		}