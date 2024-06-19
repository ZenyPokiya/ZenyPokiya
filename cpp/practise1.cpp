#include<iostream>
using namespace std;
int main(){
    int rate,qty,amt;
    float dis,billamt,gst,netamt;
    cout<<"Rate:";
    cin>>rate;
    cout<<"Quantity:";
    cin>>qty;
    amt=rate*qty;
    dis=amt*0.05;
    billamt=amt-dis;
    gst=billamt*0.18;
    netamt=gst+billamt;
    cout<<"rate\tqty\tamt\tdis\tbillamt\tgst\tnetamt"<<endl;
    cout<<rate<<"\t"<<qty<<"\t"<<amt<<"\t"<<dis<<"\t"<<billamt<<"\t"<<gst<<"\t"<<netamt;
  return 0;
}