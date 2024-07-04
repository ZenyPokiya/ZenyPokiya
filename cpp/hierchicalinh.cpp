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

class derive2: public base{
    protected:
    int c;
    public:
    void setC(){
        cout<<"Enter C:";
        cin>>c;
    }
        void sum(){
            cout<<"Product of a and c is:"<<a*c;
        }
};



int main(){
    class derive1 obj;
    obj.setA();
    obj.setB();
    obj.sum();
    class derive2 obj1;
    obj1.setA();
    obj1.setC();
    obj1.sum();

return 0;
}