#include<iostream>
using namespace std;

class Shape{

};

class derive:public Shape{
    protected:
    int r;
    float pi=3.14;
    public:
    void Sphere(){
        cout<<"Radius is:";
        cin>>r;
    }
    void volume(){
        cout<<"Volume of Sphere is:"<<4*(pi)*r*r*r/3;
    }
};

class derive1: public Shape{
    protected:
    int l,b,h;
    public:
    void Cuboid(){
        cout<<endl<<"Enter l:";
        cin>>l;
        cout<<"Enter b:";
        cin>>b;
        cout<<"Enter h:";
        cin>>h;
        
    }
    void volume(){
        cout<<"Volume of Cuboid is:"<<l*b*h;
    }
};

class derive2: public Shape{
    protected:
    int a;
    public:
    void Cube(){
        cout<<endl<<"Enter a:";
        cin>>a;
    }
        void volume(){
            cout<<"Volume of cube is:"<<6*a;
        }
};



int main(){
    class derive obj;
    obj.Sphere();
    obj.volume();
    
    class derive1 obj1;
    obj1.Cuboid();
    obj1.volume();

    class derive2 obj2;
    obj2.Cube();
    obj2.volume();
    

return 0;
}