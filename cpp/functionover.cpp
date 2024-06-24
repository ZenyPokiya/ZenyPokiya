#include<iostream>
using namespace std;
class demo{
    public:
    void test(){
        cout<<"Default function call:"<<endl;
    }
    void test(int a){
        cout<<"Parameter function call:"<<endl;
    }
    void test(int a,int b){
        cout<<"Addition of a and b:"<<a+b<<endl;
    }
};

int main(){
    demo t;
    t.test(10,20);
    t.test();
    t.test(30,45);
    return 0;
}