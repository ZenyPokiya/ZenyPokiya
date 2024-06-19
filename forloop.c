#include <stdio.h>

int main()
{
    int i, n;
for(i='A';i<='Z';i){
    printf("%c\t",i);
    i+=2;
    printf("%c\t",i+32);
    i+=2;
}

    return 0;
}
