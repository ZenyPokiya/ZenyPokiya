#include<iostream>
using namespace std;

class Flight{

   protected:
    int flightno;
    char destination[20];
    

    public:
    void feedinfo(){
        cout<<"Flight no.:";
        cin>>flightno;
        cout<<"Destination:";
        cin>>destination;
    }
    };

 class Flight1{
    protected:
    float fuel;
    float distance;
    float calfuel(int distance);
    public:
    void showinfo(){
        
        cout<<"Distance covered:";
        cin>>distance;
       
         if(distance<=1000){
             cout<<"fuel consumed 500"<<endl;
            }
            else if(distance>1000 && distance<=2000){
             cout<<"Fuel consumed 1100"<<endl;
            }
             else if(distance>2000){
             cout<<"Fuel consumed 2200"<<endl;
         }
     }
}; 

class derive:public Flight,public Flight1{
    public:
   
   
    
};
float Flight1::calfuel(int distance){
        
         if(distance<=1000){
             cout<<"fuel consumed 500"<<endl;
         }
         else if(distance>1000 && distance<=2000){
             cout<<"Fuel consumed 1100"<<endl;
         }
         else if(distance>2000){
             cout<<"Fuel consumed 2200"<<endl;
         }
    }

int main()
{
    class derive c;
    c.feedinfo();
    c.showinfo();
  return 0;
}