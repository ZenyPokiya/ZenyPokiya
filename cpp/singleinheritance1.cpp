#include<iostream>
using namespace std;
class Batsman{
    protected:
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

};

class derive: public Batsman{
    public:
    void displaydata(){
        readdata();
        cout<<endl<<"Batsman name:"<<bname<<endl;
        cout<<"Batsman code:"<<bcode<<endl;
        cout<<"Innings played by batsman:"<<innings<<endl;
        cout<<"Runs scored:"<<runs<<endl;
        cout<<"Notout:"<<notout<<endl;
       cout<<"Average:"<<calcavg(innings,runs,notout)<<endl;
        }
};
  float Batsman :: calcavg(int innings,int runs,int notout){
    return runs/(innings-notout);
   }

int main()
{
    class derive ob;
    ob.displaydata();
return 0;
}