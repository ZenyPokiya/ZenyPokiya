#include<stdio.h>

int main(){
    int n;
    int total=0;
    
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
     printf("Enter elements of %d:",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
     printf("%d\t",arr[i]);
     total+=arr[i];
    }
    printf("\nSum of all elements is:%d\t",total);
return 0;
}