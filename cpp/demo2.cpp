 #include<iostream>
 using namespace std;
 class bank
 {
       private:
       float balance=0,deposit,withdraw;
       public:
      
      void c_diposit()
       {
         cout<<"enter amount deposit :";
         cin>>deposit;
         balance=balance+deposit;
       }
         void c_withdraw()
       {
         cout<<"enter your withdraw amount :";
        
         cin>>withdraw;
         balance=balance-withdraw;
       }  
        void c_showdata()
      {
         cout<<" your balance :"<<endl<<"\t"<<balance<<endl;
       }
 };
       int main(){
       bank a;
       int ch;

      cout<<" press[1] to chek account balance"<<endl;
      cout<<" press[2] to withdrawal money :"<<endl;
      cout<<" press[3] to deposit money"<<endl;
       cout<<" press[0] to exit :"<<endl;
     
    do{
         cout<<"choice your transaction :"<<endl;
         cin>>ch;
         switch (ch) {
       case 1 :
          a.c_diposit();
        break;

        case 2 :
          a.c_withdraw();
          break;

        case 3 :
          a.c_showdata();
          break;

        case 0 :
         break;
        default:
         cout<<" wrong choice......";
         break;  
         }
     }while (ch!=0);
     
     
  }
 

    
// #include<iostream>
// using namespace std;
// class Bank
// {
//     int amount=0;
//     public:
//     void deposite(int n)
//     {
//         amount = amount + n;
//     }
//     int withdraw(int n)
//     {
//         if(n <= amount)
//         {
//             amount = amount - n;
//         }
//         else
//         {
//             cout<<"your balance is low ..."<<endl;
//         }
//     }
//     void show_balance()
//     {
//         cout<<"FINAL BALANCE IS ="<<amount<<endl;
//     }
// };
// int main()
// {
//         Bank b;
//         int ch, amount;
//         int choice;
//         while (ch != 0)
//         {
//                 cout << "1 : Deposite  " << endl;
//                 cout << "2 : Withdraw  " << endl;
//                 cout << "3 : Show Balance   " << endl;
//                 cout << "4 : Exit  " << endl;
//                 cout << "Enter Your choice :   "<<endl;
//                 cin >> ch;
//                 switch (ch)
//                 {

//                 case 1:
//                         cout << "Enter deposit : ";
//                         cin >> amount;
//                         b.deposite(amount);
//                         break;
//                 case 2:
//                         cout << "Enter Withdraw : ";
//                         cin >> amount;
//                         b.withdraw(amount);
//                         break;
//                 case 3:
//                         b.show_balance();
//                         break;
//                 case 4:
//                         cout << " Thanks visit again..." << endl;
//                         return 0;
//                         break;

//                 default:
//                         cout << "Invalid input " << endl;
//                 }
//         }
//     return 0;
// }
