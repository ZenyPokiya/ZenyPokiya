#include<stdio.h>
int marks1,marks2 ,marks3,total;
    float percent;
void  marks()
{
    
    printf("Enter maths marks:");
    scanf("%d",&marks1);
    printf("Enter chem marks:");
    scanf("%d",&marks2);
    printf("Enter phy marks:");
    scanf("%d",&marks3);
    total=marks1+marks2+marks3;
}

void total1(){
     marks();
    printf("Total marks :%d\n",total);
    float percent=total/3.0;
    printf("Percentage is:%0.2f",percent);
}

int main(){
 total1();
 return 0;
}

