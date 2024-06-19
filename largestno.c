#include<stdio.h>
int main()
{
int a;
int b;
int c;
printf(" enter a:");
scanf("%d",&a);
printf(" enter b:");
scanf("%d",&b);
printf(" enter c:");
scanf("%d",&c);
if (a>b && a>c){
printf("a is largest number");
}else if (b>a && b>c){
printf("b is largest number");
}else {
printf("c is largest number");
}
return 0;
}