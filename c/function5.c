#include <stdio.h>
void perfectno(){
int i,n,sum;
printf("Enter no. of n: ");
scanf("%d",&n);
sum=0;
for(i=1;i<=n;i++){
    if(n%i==0){
        printf("n is a perfect no.");
    }

    printf("\n");
}
for(i=1;i<=n;i++){
    if(n%i==0){
       sum+=i;
       printf("%d/t",i);
    }

}
printf("sum of divisor");
if(sum==n){
    printf("it is perfect no.");

}else{
    printf("it is not a perfect no.");

}
printf("\n");
}
int main(){
perfectno( );
return 0;
}

