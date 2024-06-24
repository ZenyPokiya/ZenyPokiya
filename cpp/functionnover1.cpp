#include<iostream>
using namespace std;
class volume{
    public:
    void shapes(int a){
        cout<<"Volume of cube is:"<<a*a*a<<endl;
    }
    void shapes(double r){
        float pi=3.14;
        cout<<"Volume of spere is:"<<(4*(pi)*r*r*r)/3<<endl;
    }
    void shapes(int z,int s,int x){
        cout<<"Volume of cuboid:"<<z*s*x<<endl;
    }
    void shapes(double b,double h){
        float pi=3.14;
        cout<<"Volume of cylinder:"<<pi*b*b*h<<endl;
    }
};
int main(){
    volume v;
    v.shapes(12);
    v.shapes(6.5);
    v.shapes(22,4,8);
    v.shapes(12.5,5.5);
}