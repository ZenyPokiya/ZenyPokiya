#include<stdio.h>
int main()
{
int a;
printf("a is:");
scanf("%d",&a);
if (a%5==0){
printf("a is multiple of 5");
}else{
printf("a is not divisible by 5");
}
return 0;
}