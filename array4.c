#include<stdio.h>
int main(){
    int n,i;
    int arr[n];
    
    printf("Enter array size:");
    scanf("%d",&n);
    int sum;

    for( i=0; i<=n;i++){
    printf("Elements of array are:");
    scanf("%d",&arr[i]);}
 
if(i%2==0){
    printf("\nSum of even position elements is:");
    scanf("%d",&sum);
    sum=+i;
}else if(i%2!=0){
    printf("\nSum of odd position elements is:");
    scanf("%d",&sum);
    sum=+i;
}else{
    printf("Error");
}
    
return 0;
}

