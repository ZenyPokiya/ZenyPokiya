#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
    int sum;
    sum=factorial(10);
    printf("Factotrial of 10 is:%d",sum);
    return 0;
}