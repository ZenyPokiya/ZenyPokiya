#include <stdio.h>
int main()
{ 
int n,i;
int oddsum =0;
int evensum =0;
  printf("Enter array size: ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
  printf("Enter elements:");
  scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++);{
     printf("%d\t",arr[i]);
  }
  if(arr[i]%2==0){
	  evensum += arr[i];
	  printf("%d",arr[i]);
  }else{
     oddsum+=arr[i];
      printf("%d",arr[i]);
  }	  
  
  return 0;
}
  