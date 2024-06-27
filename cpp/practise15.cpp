#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter elements of" << "["<<i<<"]"<<"and "<<"["<<j<<"]"<<":";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==0){
                cout<<"\t";
            }else{
                cout<<"\t"<<arr[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}