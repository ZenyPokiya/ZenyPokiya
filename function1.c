#include <stdio.h>

void sub(int a,int b){
printf("%d",a-b);
}

int divide(int a, int b){
    int total;
    total=a/b;
    return total;
}

int main(){
sub(50,20);

int total; 
total = divide(50,10);
printf("\n%d",total);
return 0;

}