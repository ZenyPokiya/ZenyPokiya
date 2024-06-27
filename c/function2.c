#include<stdio.h>

void interest(int p,int r,int t){
   
    printf("Simple interest is:%d",p*r*t/100);

}

float interestsimple(int p,int r,int t){
    
   float simple_interest;
    simple_interest=p*r*t/100;
   return simple_interest;
} 



int main(){
interest(56,76,87);

float simple_interest;
simple_interest=interestsimple(34,64,98);
printf("\nSimple interest is:%0.2f",simple_interest);
return 0;

}
