#include<stdio.h>
int main()
{
int a;
int b;
printf("a is:");
scanf("%d",&a);
printf("b is:");
scanf("%d",&b);
if (a<b){
printf("Number b is: %d",b);
}else{
printf("Number a is: %d",a);
}
return 0;
}