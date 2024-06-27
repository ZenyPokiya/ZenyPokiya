#include<stdio.h>
int series(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return (series(n-1)+series(n-2));
    }
}

int main(){

    for(int i=0 ;i<=10;i++){
    printf(" %d\t",series(i));
}
    return 0;


}