#include<stdio.h>
int main(){
    int n;
    int arr[n];
    printf("Enter array size:");
    scanf("%d",&n);
    int sum;

    for( int i=0; i<=n;i++){
    printf("Elements of array are:");
    scanf("%d",&arr[i]);
 
if(arr[i]%2==0){
    printf("Sum of even position elements is:");
    scanf("%d",&sum);
    sum=+arr[i];
}else if(arr[i]%2!=0){
    printf("Sum of odd position elements is: ");
    scanf("%d",&sum);
    sum=+arr[i];
}else{
    printf("Error");
}
    }
return 0;
}