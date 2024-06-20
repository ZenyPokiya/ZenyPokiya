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
        cout<<"Distance covered in 1 litre fuel:"<<fuel<<endl;
    }

    void showinfo(){
        cout<<endl<<"Flight no.:"<<flightno<<endl;
        cout<<"Destination:"<<destination<<endl;
        cout<<"Distance covered:"<<distance<<endl;
        cout<<"Fuel consumed:"<<fuel<<endl;
        cout<<"Distance covered in 1 litre fuel:"<<calfuel(distance,fuel)<<endl;
    }
    };

    float flight::calfuel(int distance,int fuel){
        return fuel/distance;
    }

    int main(){
        class flight fl;
        fl.feedinfo();
        fl.showinfo();
        return 0;
    }