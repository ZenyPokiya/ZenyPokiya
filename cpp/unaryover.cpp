#include<iostream>
using namespace std;

class complex{
    int x,y;
    public:
    void getdata(int a, int b){
    x=a;
    y=b;
}
    void display(){
        cout<<"Value of x:"<<x<<endl;
        cout<<"Value of y:"<<y<<endl;
    }
    void operator-(){
        x=-x;
        y=-y;
    }
    };

int main(){
    complex s;
    s.getdata(-4,5);
    s.display();
    cout<<"After function call"<<endl;
    -s;
    s.display();
    return 0;
}