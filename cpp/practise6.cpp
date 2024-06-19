#include<iostream>
using namespace std;
int main(){
    char i,n;
    for(i='A';i<='Z';i++){
        cout<<char(i)<<"\t";
        i+=2;
        cout<<char(i+32)<<"\t";
        i+=1;
    }
    return 0;
}