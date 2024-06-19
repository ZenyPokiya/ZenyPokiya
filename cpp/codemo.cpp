#include<iostream>
using namespace std;
class Employe{
    private:
    int a,b;
    public:
    void getdata(int a1,int b1){
        a=a1;
        b=b1;
    }
    void sum(){
        cout<<"Sum is:"<<a+b;
    }
};

int main(){
    class Employe emp1;
    emp1.getdata(10,20);
    emp1.sum();
    return 0;
}