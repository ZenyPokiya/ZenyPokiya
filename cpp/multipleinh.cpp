#include<iostream>
using namespace std;

class Number{
    protected:
    int a;
    public:
    void setA(){
    cout<<"Enter A:";
    cin>>a;
}
};

class Number1{
    protected:
    int b;
    public:
    void setB(){
    cout<<"Enter B:";
    cin>>b;
    }
};

class derive: public Number ,public Number1{
    public:
    void product(){
        cout<<"A*B="<<a*b;
    }
};

int main()
{
    class derive c;
    c.setA();
    c.setB();
    c.product();
return 0;
}