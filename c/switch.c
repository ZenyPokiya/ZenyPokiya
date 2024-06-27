#include<stdio.h>
int number;
char name[50];
void getdata(){
    printf("\nEnter the number:");
    scanf("%d",&number);
    printf("\nEnter the name:");
    scanf("%s",&name);
    }

void printdata(){
    int Rollno;
    int marks;
    printf("\nEnter Roll no.:");
    scanf("%d",&Rollno);
    printf("\nEnter marks:");
    scanf("%d",&marks);

}


int main(){
    int n;
    do{
        printf("\n1: getdata");
        printf("\n2: printdata");
        printf("\nSelect number:");
        scanf("%d",&n);

        switch(n){
            case 1: 
            getdata();
            break;

            case 2:
            printdata();
            break;
             
            case 3:
            printf("\nSelect 3:");
            break;

            default:
            printf("\nError");
            break;
        }

        }while(n==4);

        return 0;


    }



