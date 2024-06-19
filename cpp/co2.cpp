#include<iostream>
using namespace std;
class batsman{
    private:
    int bcode;
    char bname[50];
    int innings,notout,runs;
    float batavg;
    float calcavg(float batavg,int innings,int runs,int notout);


    public:
    void readdata(){
        cout<<"Enter bcode:";
        cin>>bcode;
        cout<<"Enter batsman name:";
        cin>>bname;
        cout<<"Innings:";
        cin>>innings;
        cout<<"Notout:";
        cin>>notout;
        cout<<"Runs:";
        cin>>runs;
    }

};

//     float batsman::calcavg(float batavg,int innings,int runs,int notout);

// int main(){
//     class batsman bm;
//     bm.readdata();
//     bm.calcavg();
//     bm.displaydata();


    
    

// }