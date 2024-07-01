#include<iostream>
using namespace std;
class Number{
    int a,b,c;
    friend void largest(Number x);
    public:
    void setdata(int x ,int y, int z){
        a=x,b=y,c=z;
       
    }
    
    void displaydata(){
        cout<<"Value of A is:"<<a<<endl;
        cout<<"Value of B is:"<<b<<endl;
        cout<<"Value of C is:"<<c<<endl;
    }
   
};
 void largest(Number x){
         if(x.a>x.b && x.a>x.c){
            cout<<"A is largest number"<<endl;
        }else if(x.b>x.a && x.b>x.c){
            cout<<"B is largest number"<<endl;
        }else if(x.c>x.a && x.c>x.b){
            cout<<"C is largest number"<<endl;
        }else if(x.a==x.b && x.b==x.c && x.c==x.a){
            cout<<"A,B and C are equal"<<endl;
        }
    }
    
int main()
{
    Number x;
    x.setdata(6,6,6);
    x.displaydata();
    largest(x);
return 0;
}