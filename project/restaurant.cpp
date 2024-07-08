#include<iostream>
using namespace std;

class Menu{
    public:
    int price,qty,dno;
    public:
    void data(){
    cout<<"********** MENU ***********"<<endl;
    cout<<"        ITEM                              PRICE "<<endl;
    cout<<"(1)  Chicken Biryani                    $2 only."<<endl;
    cout<<"(2)  Chicken Palao                      $1.5 only."<<endl;
    cout<<"(3)  Chinese Rice                       $2.5 only."<<endl;
    cout<<"(4)  Chicken Burgar                     $1 only."<<endl;
    cout<<"(5)  Nawabi Pizza                       $4.5 only."<<endl;
    cout<<"(6)  2.5 Litre Coke                     $1.75 only."<<endl;
        }

    void order(){
    
    cout<<"Enter dish number:";
    cin>>dno;
    cout<<"Enter qty:";
    cin>>qty;
    }

    void Bill(){
        cout<<"Price:"<<price*qty<<endl;
    }
};

int main()
{
    class Menu mn;
    mn.order();
    mn.Bill();
    mn.data();
    int n;
    do{
    cout<<"****************************"<<endl;
    cout<<endl<<endl<<"1.Take Order"<<endl;
    cout<<endl<<"2.Generate Bill"<<endl;
    cout<<endl<<"3.Show Menu"<<endl;
    cout<<endl<<"4.Exit"<<endl;
    cout<<"Enter selected number:";
    cin>>n;

     switch(n){
       case 1:
       cout<<"";
       cout;
       break;
       case 2:
       cout;
       break;
       case 3:
       cout;
       break;
       case 4:
       cout<<endl<<"********* THANK YOU **********";
       cout<<endl<<"********* VISIT AGAIN ***********";
       break;
       default:
       ;
       
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