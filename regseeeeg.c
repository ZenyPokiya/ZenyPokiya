#include<stdio.h>
void sum();
int sum1(){
int a=10;
int b=20;
int total;
total=a+b;
return total;
}
int main()
{
int total;
sum();
total =sum1();
printf("sum1 total is: %d ",total);
return 0;
}
void sum()
int a=10;
int b=20;
printf("total is : %d",a+b);

}