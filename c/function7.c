#include<stdio.h>
int total=0;
void marks(int sub){
    int marks;
    if(sub>0){
        printf("Enter marks of sub:%d",sub);
        scanf("%d",&marks);
        total+=marks;
        marks1(sub-1);
    }
float percent(int sub)
{
    if(sub==0){
        return(float total marks * 100/3*sub);
    }
    return percent(sub-1)
}
void result(float percent1)
    printf("Total marks:%d",marks);
    printf("percentage is:%0.2f",percent);

}
int main(){
    int sub=3;
    marks(sub);
    float percent1=percent(sub);
    result(percent);
    return 0;
}