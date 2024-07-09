#include<iostream>
using namespace std;

class student{
    public:
    static int stuno;
    int i=0;

    student(){
        stuno++;
        i++;
    }
    void display(){
        cout<<"Display function call..."<<i<<endl;
    }
    void display(){
        cout<<"";
    }
};

int main(){
    return 0;
}