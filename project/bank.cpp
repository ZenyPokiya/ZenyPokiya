#include<iostream>
using namespace std;

class Bank{
    public:
    int pin;
    int accno;float withdraw,deposit;
    float balance=5000;
    public:
    void getdata(){
    cout<<"Enter PIN:";
    cin>>pin;
    cout<<"Account No.:";
    cin>>accno;
    }
    
void enter(){
        if ( withdraw<100){
            cout<<"Invalid!!";
        }
    }
};

int main()
{
    class Bank bk;
    bk.getdata();
    bk.enter();

int n;float withdraw,deposit;float balance=5000;
do{
    cout<<endl<<"1.Withdraw";
    cout<<endl<<"2.Deposit";
    cout<<endl<<"3.Check Balance ";
    cout<<endl<<"4.Exit"<<endl;
    cin>>n;
    switch (n){
        case 1:
        cout<<endl<<"Withdraw amount:";
        cin>>withdraw;
        balance-=withdraw;
        break;

        case 2:
        cout<<endl<<"Deposit amount:";
        cin>>deposit;
        balance+=deposit;
        break;
        
        case 3:
        cout<<endl<<"Check balance:"<<balance;
        break;

        case 4:
        cout<<endl<<"Exit Account";
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