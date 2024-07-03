#include<iostream>
using namespace std;

class Test{
   protected:
    
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

};


class Test1: public Test{
    public:
    void disptest(){
        cout<<endl<<"Test code:"<<testcode<<endl;
        cout<<"Description:"<<des<<endl;
        cout<<"Number of candidates:"<<nocandidate<<endl;
        cout<<"number of centres:"<<calcen(nocandidate)<<endl;
    }
   
};

class derive:public Test1{
    public:
    void d()
    {}
};
 int Test::calcen(int nocandidate){
    return (nocandidate/100+1);
    }
    

int main()
{
    class derive c;
    c.schedule();
    c.disptest();
   
    
return 0;
}