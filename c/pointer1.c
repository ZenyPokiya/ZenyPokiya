#include<stdio.h>
int main(){
int a;
printf("a is:");
scanf("%d",&a);
int b;
printf("b is:");
scanf("%d",&b);
int *c;
int *d;
c=&a;
d=&b;
*c=*c+*d;
*d=*c-*d;
*c=*c-*d;
printf("a is:%d\n",*c);
printf("b is:%d\n",*d);


}