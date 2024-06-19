#include <iostream>
using namespace std;
int main(){
    int j=11;
    for(int i=1;i<=5;i++){
        for(int z=1;z<=5;z++){
            cout<<"\t"<<j;
            j++;
        }
        j+=5;
        cout<<endl;
    }
    return 0;
}