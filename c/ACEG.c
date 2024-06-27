#include <stdio.h>

int main()
{
    int n, i;
    char term='A';
    
    printf("No. of terms are:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    printf("%c\t",term);
    term+=2;
    }

    return 0;
}