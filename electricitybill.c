#include<stdio.h>
int main()
{
float units;
int charge;
printf("units consumed:");
scanf("%d",&units);

if (units>0 && units<100){
charge=units*0.60
printf("enery consumed: %0.2f",charge);
}else if (units>=100 && 200<units){
charge= units*0.80
printf("energy consumedL: %0.2f",units);


printf("")