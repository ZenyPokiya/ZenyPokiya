#include<iostream>
using namespace std;
class centre{
    private:
    int testcode,nocandidate,centrereq;
    char des[50];
    int calcen(int nocandidate);

    public:
    void schedule(){
        cout<<"Test code:";
        cin>>testcode;
        cout<<"Description:";
        cin>>des;
        cout<<"Number of candidates:";
        cin>>nocandidate;
        }
    void disptest(){
        cout<<endl<<"Test code:"<<testcode<<endl;
        cout<<"Description:"<<des<<endl;
        cout<<"Number of candidates:"<<nocandidate<<endl;
        cout<<"number of centres:"<<calcen(nocandidate)<<endl;
    }
};

int  centre::calcen(int nocandidate){
    return (nocandidate/100+1);
}

int main(){
    class centre cn;
    cn.schedule();
    cn.disptest();
    return 0;
}