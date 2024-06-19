#include<stdio.h>

struct students
{
    int marks;
    int Rollno;
    char name[50];
    int sub[5];
    int total;
    float percent;

};


int main(){
    struct students st1[3];
    for(int i=0;i<3;i++){
        st1[i].total=0;
        st1[i].percent=0;
        printf("\nEnter Roll no.:");
        scanf("%d",&st1[i].Rollno);
        printf("Enter name:");
        scanf("%s",&st1[i].name);
        for(int j=0;j<5;j++){
            printf("Subject marks:");
            scanf("%d",&st1[i].sub[j]);
            st1[i].total+=st1[i].sub[j];
            st1[i].percent=st1[i].total/5.0;
            
         }
            printf("Total marks:%d\n",st1[i].total);
            printf("Percentage is:%0.2f",st1[i].percent);
 }


    return 0;
}