#include<stdio.h>
int main()
{
int i;
int n;
int sum;
printf("n number of terms are:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("%d\t",i*i);
    sum+=i;

}

return 0;
}

