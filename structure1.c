#include<stdio.h>
struct students{
    int age;
    char name[50];
};

int main(){
    struct students  st1[3];
    for(int i=1;i<=3;i++){
        printf("Enter age:");
        scanf("%d",&st1[i].age);
        printf("Enter name:");
        scanf("%s",st1[i].name);

    }
        for (int i=1;i<=3;i++){
            printf("%d",st1[i].age);
             printf("%s",st1[i].name);

        }
    return 0;
}