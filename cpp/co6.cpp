#include<iostream>
using namespace std;

class report{
    private:
    int adno;
    char name[20];
    int marks[5];
    float average;
    float getavg(int sub);
    
    
    public:
    void readinfo(){
        cout<<"ad no:";
        cin>>adno;
        cout<<"Name:";
        cin>>name;
        cout<<"Marks:";
        cin>>marks;
    }
    void getavg(){
        cout<<"adno:"<<adno;
        cout<<"Name:"<<name;
        cout<<"Marks"<<marks;
        cout<<"Average:"<<average;
        cout<<"Average of five sub:"<<getavg(sub);
    }
    void displayinfo(){
         cout<<"adno:"<<adno;
        cout<<"Name:"<<name;
        cout<<"Marks"<<marks;
        cout<<"Average:"<<average;
        cout<<"Average of five sub:"<<getavg( int sub);
    }
};
float report::getavg(int sub){
    return sub/5;
}
int main(){
    class report rt;
    rt.readinfo();
    rt.displayinfo();
}