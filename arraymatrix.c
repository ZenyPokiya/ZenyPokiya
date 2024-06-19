#include<stdio.h>
int main()
{
int total=0;
int diagonalsum=0;
int lowersum=0;
int uppersum=0;


int arr[3][3];
for (int i=0;i<3;i++){
   for(int j=0;j<3;j++){
    printf("Enter elements of [%d] and [%d]:",i,j);
scanf("%d",&arr[i][j]);
	
 } 
}
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
	printf("%d\t",arr[i][j]);

  if(i==j){
    diagonalsum+=arr[i][j];
	
 }else if (i>j){
   lowersum+=arr[i][j];
  
   
 }else if (i<j){
    uppersum+=arr[i][j];
	
 }else{
 
printf("error"); }
} 
printf("\n");
}
printf("\n");
printf("lower triangle sum of matrix is: %d\n",lowersum);
printf("upper triangle sum of matrix is:%d\n",uppersum);
printf("diagonal sum of matrix is:%d\n",diagonalsum);



return 0;
}

