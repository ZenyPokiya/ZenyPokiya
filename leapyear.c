#include<stdio.h>
int main()
{
int a;
printf("year is:");
scanf("%d",&a);
if (a%4==0){
printf("it is leap year");
}else{
printf("it is not a leap year");
}
return 0;
}