#include<stdio.h>

int main(){
		
	int k;
	int n;
   printf("Enrter array size:");
   scanf("%d",&n);
   int arr[n];
 
   for(int i=0;i<n;i++){
      printf("Enter elements of:");
      scanf("%d",&arr[i]);
   }
   for(int i=0;i<n;i++){
      printf("%d\t",arr[i]);
   }
  printf("\nEnrter array size:");
   scanf("%d",&k);
   
   int xyz[k];
  for(int j=0;j<k;j++){
   printf("Enter elements of %d:",j);
   scanf("%d",&xyz[j]);
  }
   for(int j=0;j<k;j++){
   printf("%d\t",xyz[j]);
   }
	return 0;
}