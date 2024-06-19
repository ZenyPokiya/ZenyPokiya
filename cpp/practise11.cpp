#include<iostream>
using namespace std;
int main(){
    int total=0,diagonal=0,lower=0,upper=0;
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter elements of" << "["<<i<<"]"<<"and "<<"["<<j<<"]"<<":";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
            if(i==j){
                diagonal+=arr[i][j];
            }else if(i>j){
                lower+=arr[i][j];
            }else if(i<j){
                upper+=arr[i][j];
            }else{
                cout<<"ERROR!!";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Lower triangle sum of matrix is:"<<lower<<endl;
    cout<<"Lower triangle sum of matrix is:"<<upper<<endl;
    cout<<"Diagonal sum of matrix is:"<<diagonal<<endl;
    return 0;
}