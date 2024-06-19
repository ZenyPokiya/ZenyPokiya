#include<stdio.h>

void coin(){
    
    int coin1=1,coin2=2,coin3=5,coin4=10,coin5=20,cointotal;
    int cointotal=coin1+coin2+coin3+coin4+coin5;
    int total2;
    int total3=total2-cointotal;
    int n;
    printf("Enter amt:");
    scanf("%d",&total2);
    for(int i=0;i<=n;i++){
        if(total2>=38){
            coin1*=1;
            coin2*=1;
            coin3*=1;
            coin4*=1;
            coin5*=1;
        }else if(total2>=20){
             coin5++;
            coin5*=1;
        }else if(total2>=10){
           coin4++;
            coin4*=1;
        }else if(total2>=5){
            coin3++;
            coin3*=1;
        }else if (total2>=2){
            coin2++;
            coin2*=1;
        }else if(total2>=1){
           coin1++;
            coin1*=1;
        }else{
            printf("No. of coins of 1 are:%d",coin1);
            printf("No. of coins of 2 are:%d",coin2);
            printf("No. of coins of 5 are:%d",coin3);
            printf("No. of coins of 10 are:%d",coin4);
            printf("No. of coins of 20 are:%d",coin5);

        }
    }

}


int main()
{
    coin();
    return 0;
}