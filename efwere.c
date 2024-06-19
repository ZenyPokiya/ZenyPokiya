#include<stdio.h>
int main()
{


int arr[3][3][3];
for (int i=0;i<3;i++){
   for(int j=0;j<3;j++){
	   for(int k=0;k<3;k++){
    printf("Enter elements of [%d] and [%d] and [%d]:",i,j,k);
scanf("%d",&arr[i][j][k]);
	   }	
 } 
}for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
	for(int k=0;k<3;k++){
	printf("%d\t",arr[i][j][k]);
} 
printf("\n");

}}
return 0;
}

