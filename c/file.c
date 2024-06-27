#include<stdio.h>
int main(){
    FILE *ptr;
    char string[100];
    // ptr=fopen ("text.txt","w");
    // gets (string);
    // fprintf(ptr ,"%s",string);

   ptr=fopen("text.txt","r");
   while(fscanf(ptr,"%s",string)!=EOF){
    printf("%s",string);
   }
}