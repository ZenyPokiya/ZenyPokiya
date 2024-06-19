#include<stdio.h>
int main(){
    for (int i=0;i<=10;i++){
        if(i==6){
            goto next;
        }
        printf("%d\n",i);
        
    }
   next: for(int j=0;j<=15;j++){
    printf("%d\n",j);
   }
   return 0; 
}