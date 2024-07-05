#include<iostream>
using namespace std;

class base{
    public:
    // virtual void display()=0;               // pure virtual function

    virtual void display(){
        cout<<"Base class display function call";
    }
};

class derive:public base{
    public:
    void display(){
        cout<<"derive class display function call";
    }
};

int main()
{
    base *p;
    derive d;
    p=&d;
    p->display();
    return 0;
}