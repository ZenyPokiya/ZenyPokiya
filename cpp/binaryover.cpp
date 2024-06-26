#include <iostream>
using namespace std;

    class cuboid{
        int l,b,h;
        public:
        void setdata(int x,int y,int z){
        l=x,b=y,h=z;
        }
        int getvolume(){
            return l*b*h;
        }
        cuboid operator+(cuboid &n){
            cuboid t;
            t.l = l + n.l;
            t.b = b + n.b;
            t.h = h + n.h;
            return t;
        }
    };

    int main(){
        cuboid c1,c2,c3;
        c1.setdata(2,2,2);
        cout<<"Volume of cuboid c1 is:"<<c1.getvolume()<<endl;
        c2.setdata(3,3,3);
        cout<<"Volume of cuboid c2 is:"<<c2.getvolume()<<endl;

        c3=c1+c2;
        cout<<"New volume of cuboid c3 is:"<<c3.getvolume()<<endl;
    }

