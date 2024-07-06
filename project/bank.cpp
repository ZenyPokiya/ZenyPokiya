#include<iostream>
using namespace std;

class Bank{
    public:
    int pin;
    int accno;float withdraw,deposit;
    float balance=5000;
    public:
    void getdata(){
    cout<<"*******WELCOME TO HDFC BANK *******"<<endl;
    cout<<"Enter PIN:";
    cin>>pin;
    cout<<"Account No.:";
    cin>>accno;
    }
};

int main()
{
    class Bank bk;
    bk.getdata();
   

int n;float withdraw,deposit;float balance=5000;
do{ 
     cout<<"****************************";
    cout<<endl<<endl<<"1.Withdraw"<<endl;
    cout<<endl<<"2.Deposit"<<endl;
    cout<<endl<<"3.Check Balance "<<endl;
    cout<<endl<<"4.Exit"<<endl;
    cout<<"Enter selected number:";
    cin>>n;
    switch (n){
        case 1:
        cout<<endl<<"Withdraw amount:";
        cin>>withdraw;
        balance-=withdraw;
        cout<<"Current balance:"<<balance<<endl;
        cout<<"****************************";
        break;

        case 2:
        cout<<endl<<"Deposit amount:";
        cin>>deposit;
        balance+=deposit;
        cout<<"Current balance:"<<balance<<endl;
        cout<<"****************************";
        break;
        
        case 3:
        cout<<endl<<"Check balance:"<<balance<<endl;
        cout<<"****************************";
        break;

        case 4:
        cout<<endl<<"Exit Account"<<endl;
        cout<<"****************************";
        cout<<endl<<"******** THANK YOU ********";
        cout<<endl<<"****** VISIT AGAIN ******";
        break;

        default:
        cout<<endl<<"!!ERROR!!";
}
}while(n!=4);
for(int i=1;i<=0;i++){
    if(i==5){
        continue;
    }
    cout<<i;
}
return 0;
}