#include<iostream>
using namespace std;
int main(){
    int n,i;
    for(i='A';i<='Z';i++){
        if(i%2==0){
            cout<<char(i+32)<<"\t";
        }else {
            cout<<char(i)<<"\t";
        }
    }
    return 0;
}