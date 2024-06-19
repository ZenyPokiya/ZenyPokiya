#include<iostream>
using namespace std;
int main(){
    int k='A';
    for (int i=1;i<=5;i++){
        for (int j=1;j<=i;j++){
            if(i%2!=0){
                cout<<char(k);
            }else{
                cout<<char(k+32);
             }
              k++;
        }
         cout<<endl;
    }
    return 0;
} 