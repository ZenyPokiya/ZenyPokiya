#include<iostream>
using namespace std;
class volume{
    public:
    volume(int a){
        cout<<"Volume of Cube is:"<<a*a*a<<endl;
    }
    volume(int l,int b,int h){
        cout<<"Volume of Cuboid is:"<<l*b*h<<endl;
    }
    volume(int r,int h){
        float pi=22/7;
        cout<<"Volume of Cone is:"<<(pi)*r*r*h/3<<endl;
    }
     volume(double z){
         float pi=22/7;
         cout<<"Voume of Sphere is:"<<(4*(pi)*z*z*z)/3<<endl;
     }
       
};

int main(){
    volume obj(6),obj1(5,8,9),obj2(4,5),obj3(9.9);
    return 0;
}