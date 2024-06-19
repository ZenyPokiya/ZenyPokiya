#include<iostream>
using namespace std;
float area1(){
    int a1;
    cout<<"Side is:";
    cin>>a1;
    float area=a1*a1;
    return area;
}

void area (){
    int a;
    cout<<"Side is:";
    cin>>a;
    float area2=a*a;
    cout<<"Area of square is:"<<area2<<endl;


}
int main(){
    float area2;
    area();
    area2=area1();
    cout<<"Area is:"<<area2;

}