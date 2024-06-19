#include<iostream>
using namespace std;
class flight{

    private:
    int flightno;
    float distance;
    float fuel;
    char destination[20];
    float calfuel();

    public:
    void feedinfo(){
        cout<<"Flight no.:";
        cin>>flightno;
        cout<<"Distance covered:";
        cin>>distance;
        cout<<"Fuel consumed:";
        cin>>fuel;
    }

    

    

};