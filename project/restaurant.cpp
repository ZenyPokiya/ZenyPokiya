#include<iostream>
using namespace std;

class Menu{
    public:
    int price,qty;
    public:
    void order(){
    cout<<"Enter dish number:";
    cout<<"Enter qty:";
    }

    void Bill(){
        cout<<"Price:"<<price*qty;
    }

    void data(){
    cout<<"********** MENU ***********";
    cout<<"        ITEM                              PRICE ";
    cout<<"(1)  Chicken Biryani                    $2 only.";
    cout<<"(2)  Chicken Palao                      $1.5 only.";
    cout<<"(3)  Chinese Rice                       $2.5 only.";
    cout<<"(4)  Chicken Burgar                     $1 only.";
    cout<<"(5)  Nawabi Pizza                       $4.5 only.";
    cout<<"(6)  2.5 Litre Coke                     $1.75 only.";
        
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
    cout<<"****************************";
    cout<<endl<<endl<<"1.Take Order"<<endl;
    cout<<endl<<"2.Generate Bill"<<endl;
    cout<<endl<<"3.Show Menu"<<endl;
    cout<<endl<<"4.Exit"<<endl;
    cout<<"Enter selected number:";
    cin>>n;

    switch(n){
       case 1:
       
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

    }


   
    }
return 0;
}