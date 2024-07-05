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
        cout<<endl<<endl<<"Enter l:";
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
        cout<<endl<<endl<<"Enter a:";
        cin>>a;
    }
        void volume(){
            cout<<"Volume of cube is:"<<6*a;
        }
};

class derive3: public Shape{
    protected:
    int x,y;
    float pi=3.14;
    public:
    void Cylinder(){
        cout<<endl<<endl<<"Enter x:";
        cin>>x;
        cout<<"Enter y:";
        cin>>y;
    }
        void volume(){
            cout<<"Volume of cylinder is:"<<(pi)*x*x*y;
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

    class derive3 obj3;
    obj3.Cylinder();
    obj3.volume();
    

return 0;
}