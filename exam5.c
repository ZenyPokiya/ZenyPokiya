#include<stdio.h>
int main()
{
int i,n;
for(int i=5;i>=1;i--){
for(int j=5;j>=i;j--){
printf("%d\t",j);

}
printf("\n");
}
return 0;
}