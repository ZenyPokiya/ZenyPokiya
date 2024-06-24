#include<iostream>
using namespace std;
class area{
public:
void shapes(int a){
        cout<<"Total surface area of cube is:"<<6*a<<endl;
    }
    void shapes(double r){
        float pi=3.14;
        cout<<"TsA of spere is:"<<4*(pi)*r*r<<endl;
    }
    void shapes(int z,int s,int g){
        cout<<"TSA of cuboid:"<<2*(z*s+s*g+g*z)<<endl;
    }
    void shapes(double b,double h){
        float pi=3.14;
        cout<<"TSA of cylinder is:"<<2*(pi)*b*(b+h)<<endl;
    }
};
int main(){
    area a;
    a.shapes(12);
    a.shapes(6.5);
    a.shapes(22,4,8);
    a.shapes(2.5,5.5);


}