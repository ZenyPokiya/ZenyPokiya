#include<stdio.h>
void area(int base,int height){
    printf("Area of triangle is:%d",(base*height)/2);
}

float triangle(int height,int base){
    int area1;
    area1=(base*height)/2;
    return area1;

}


int main(){
    area(5,4);

    float area1;
    area1=triangle(6,2);
    printf("\nArea of triangle is:%0.2f",area1);
    return 0;

}