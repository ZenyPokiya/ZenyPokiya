#include<stdio.h>
int main()
{
   int n;
   int total=0;
   float percentage=0;

   printf("Enter No. of student :");
   scanf("%d",&n);
   int arr[n];
   int sub[5];
   for(int i=0;i<n;i++){
     printf("\nRoll No:");
     scanf("%d",&arr[i]);
     total=0;
   for(int j=0; j<5;j++){
	   printf ("Subject marks:");
	   scanf("%d",&sub[j]);
	   total+=sub[j];
}  
   percentage=total/5.0;
   printf("Roll No.: %d\n", arr[i]);
    printf("Toatl marks of student  is:%d\n",total);
    printf("Percentage of student  is: %0.2f\n",percentage);
   
   if(percentage>=90 && 100>percentage){
      printf("Grade A");
   }else if (percentage>=80 && 90>percentage){
      printf("Grade B");
   }else if(percentage>=70 && 80>percentage){
	   printf("Grade C");
   }else if(percentage>50 && 70>percentage){
	   printf("Grade D");
   }else if(percentage<=50 && 0<percentage){
	   printf("Fail!!");
	}else{
	 printf("error");
    }
	   
   }
   return 0;
}