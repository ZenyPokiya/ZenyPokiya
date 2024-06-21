#include<iostream>
using namespace std;
class test{
    public:
    test(int a){
        cout<<"Value of a is:"<<a<<endl;
    }
    test(char a){
        cout<<"Value of a is:"<<a<<endl;
    }
    test(int a,int b){
        cout<<"Addition of a and b is:"<<a+b<<endl;
    }
    test(int a ,int b,int c){
        cout<<"Addition of a,b and c is:"<<a+b+c<<endl;
    }
};

int main(){
    test obj(30,23,34),obj1(10),obj2('A'),obj3(10,30),obj4(60);
    return 0;
    }