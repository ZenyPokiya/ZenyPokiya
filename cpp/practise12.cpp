#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter no. of n:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||j==1||i==n||j==n-i+1||i==j||j==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}