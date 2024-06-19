#include<stdio.h>
int main()
{
int total=0;
int total1=0;



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
 total+=arr[i][j];

}
printf("\n");
}
printf("Sum of matrix1 is:%d\n",total);

int arr1[3][3];
for (int i=0;i<3;i++){
   for(int j=0;j<3;j++){
    printf("Enter elements of [%d] and [%d]:",i,j);
scanf("%d",&arr1[i][j]);
}
}

for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf("%d\t",arr1[i][j]);
 total1+=arr1[i][j];
}


printf("\n");

}
printf("Sum of matrix2 is:%d\n",total1);

int total2=0;
total2=total+total1;

printf("Total of both matrix is:%d",total2 );
return 0;
}

