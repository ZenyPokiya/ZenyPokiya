#include<iostream>
using namespace std;

class base{
    protected:
    int a;
    public:
    void setA(){
        cout<<"Enter A:";
        cin>>a;
    }
};

class derive1: public base{
    protected:
    int b;
    public:
    void setB(){
        cout<<"Enter B:";
        cin>>b;
    }
void sum(){
    cout<<"Sum of a and b is:"<<a+b;
}
};

class base1{
    protected:
    int c;
    public:
    void setC(){
        cout<<"Enter C:";
        cin>>c;
    }
};

class derive2:public derive1,public base1{
    protected:
    int d;
    public:
    void setD(){
        cout<<"Enter d:";
        cin>>d;
    }
    void sum(){
        cout<<"A*B*C*D="<<a*b*c*d<<endl;
    }
};

int main(){
    class derive2 obj1;
    obj1.setA();
    obj1.setB();
    obj1.setC();
    obj1.setD();
    obj1.sum();
    class derive1 obj;
    obj.setA();
    obj.setB();
    obj.sum();
    
return 0;
}