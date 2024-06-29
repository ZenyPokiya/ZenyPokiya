#include<iostream>
using namespace std;

class bank{
    private:
    float balance=0,deposite,withdraw;

public:
void deposite(){
    cout<<"Enter Deposite amount:";
    cin>>deposite;
    balance+=deposite;

}
void withdraw(){
    cout<<"Enter withdrawal ammount:";
    cin>>withdraw;
    if(withdraw>balance){
        cout<<"Balace is low";
    }
    balance-=withdraw;
}
void balance(){
   ( balance=balance+deposite) && (balance=balance-withdraw);
    
}



};
int main(){
    int n;
    int pin;
    do{
        cout<<"Pin:";
        cin>>pin;
        switch(n){
            case 1:
            cout<<"1: Deposit ";
            break;
            case 2:
           cout<<"2: Withdraw";
            break;
            case 3:
            cout<<"3. Check Balance";
            break;
            case 4:
            cout<<"Exit";
            break;
        }
    }
    return 0;

}
