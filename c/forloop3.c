#include <stdio.h>

int main()
{
    int i,n;
	int n1,n2,n3;
n1=1;
n2=1;
n3=n1+n2;
	printf("No. of terms are:");
scanf("%d\t",&n);

   



for(i=3;i<=n;i++){
	printf("%d\t:%d\t",n1,n2);
    printf("%d\t",n3);
    n1=n2;
    n2=n3;
    n3=n1+n2;
}
    return 0;
}
