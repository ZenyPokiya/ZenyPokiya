#include <stdio.h>

struct bill
{
    int rate;
    int qty;
    int amt;
    float dis;                                                                                               float billamt;
    float gst;
    float netamt;
};
    int main(){
    struct bill it[5];
   
    for(int i=0;i<5;i++){
    printf("Rate of object:");
    scanf("%d",&it[i].rate);
    printf("qty:");
    scanf("%d",&it[i].qty);

    it[i].amt=it[i].rate*it[i].qty;
     it[i].dis=it[i].amt*0.05;
    it[i].billamt=it[i].amt-it[i].dis;
    it[i].gst=it[i].billamt*0.18;
    it[i].netamt=it[i].gst+it[i].billamt;
    printf("rate\tqty\tamt\tdis\tbillamt\tgst\t netamt");
    printf("\n%d\t%d\t%d\t%0.2f\t%0.2f\t%0.2f %0.2f\n",it[i].rate,it[i].qty,it[i].amt,it[i].dis,it[i].billamt,it[i].gst,it[i].netamt);
    }
    
return 0;
}
