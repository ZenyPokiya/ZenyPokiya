#include<iostream>
using namespace std;
class flight{

    private:
    int flightno;
    float distance;
    float fuel;
    char destination[20];
    float calfuel(int diatance,int fuel);

    public:
    void feedinfo(){
        cout<<"Flight no.:";
        cin>>flightno;
        cout<<"Distance covered:";
        cin>>distance;
        cout<<"Destination";
        cin>>destination;
    }

    void calfuel(){
        cout<<"Fuel consumed:"<<fuel<<endl;
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

    void showinfo(){
        cout<<endl<<"Flight no.:"<<flightno<<endl;
        cout<<"Destination:"<<destination<<endl;
        cout<<"Distance covered:"<<distance<<endl;
        cout<<"Fuel consumed:"<<fuel<<endl;
    }
    };

    float flight::calfuel(int distance,int fuel){
        return fuel;
    }

    int main(){
        class flight fl;
        fl.feedinfo();
        fl.showinfo();
        return 0;
    }