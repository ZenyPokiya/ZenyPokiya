#include<iostream>
using namespace std;
//1
// template <class T>
// void display(T t1)
// {
//     cout<<"Displaying template:"<<t1<<endl;
// }

//2
// template <class x, class y>
// void display (x a,y b)
// {
//     cout<<"Displaying template:"<<a<<"\t"<<b<<endl;
        
        
// }

//3
template <class t>
t sum(t x, t y){
    return x+y;
}

int main()
{
    //1
    // display(200);
    // display(12.56);
    // display('G');

    //2
    // display('Z',1.25);
    // display('x',25);
    // display(25,1.25);

    //3
    cout<<sum(1,20)<<endl;
    cout<<sum(25.5,1.6);

return 0;
}