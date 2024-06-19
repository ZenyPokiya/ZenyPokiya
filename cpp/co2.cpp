#include<iostream>
using namespace std;
class batsman{
    private:
    int bcode;
    char bname[50];
    int innings,notout,runs;
    float batavg;
    float calcavg(int innings,int runs,int notout);


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
    void calcavg(){
        //cout<<"Bcode:"<<bcode<<endl;
       // cout<<"Batsman name:"<<bname<<endl;
        cout<<"Bat average:"<<batavg<<endl;
    }

    void displaydata(){
        cout<<endl<<"Batsman name:"<<bname<<endl;
       cout<<"Batsman code:"<<bcode<<endl;
        cout<<"Innings played by batsman:"<<innings<<endl;
        cout<<"Runs scored:"<<runs<<endl;
        cout<<"Notout:"<<notout<<endl;
       cout<<"Average:"<<calcavg(innings,runs,notout)<<endl;
        
   }
};
    float batsman::calcavg(int innings,int runs,int notout){
    return runs/(innings-notout);
   }

 int main(){
     class batsman bt;
     bt.readdata();
     bt.displaydata();
     return 0;
    }