#include<iostream>
using namespace std;
class complex{
    int x,y;
    public:
    complex(){
        x=0;
        y=0;
    }
    complex (int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"Value of x:"<<x<<endl;
        cout<<"Value of y:"<<y<<endl;
    }
    complex operator+(complex &n){
        complex t;
        t.x= x + n.x;
        t.y= y + n.y;
        return t;
    }
};

int main(){
    complex c1,c2,c3;
    c1=complex(3,6);
    c2=complex(2,4);
    cout<<"First object:"<<endl;
    c1.display();
    cout<<"Second object:"<<endl;
    c2.display();
    cout<<"Final output:"<<endl;
    c3=c1+c2;
    c3.display();
    return 0;
}