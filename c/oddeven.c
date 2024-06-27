#include <stdio.h>
int main()
{
int n,i;
printf("No. of terms are:");
scanf("%d",&n);

for(i=1;i<=n;i++){

 if(i%2==0){
	printf("%d\t",i*i);
}else  {
printf("%d\t",i);
}
}
return 0;
}
