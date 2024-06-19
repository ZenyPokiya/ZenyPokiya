
#include <stdio.h>

int main()
{
    int n,i;
    int term=0;
    printf("No. of terms are:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
        printf("%d\t",i);
        term*=3+1;
    }else{
        printf("%d\t",i);
       
    }
    }
    return 0;
}