#include<iostream>
using namespace std;
int main (){
    int n,total=0;
    float percent;
    cout<<"Enter no. of students:";
    cin>>n;
    int arr[n];
    int sub[5];
    for(int i=0;i<n;i++){
        cout<<endl<<"Roll no.:";
        cin>>arr[i];
        for (int j=0;j<5;j++){
            cout<<"Subject marks:";
            cin>>sub[j];
            total+=sub[j];
        }
            percent=total/5;
            cout<<"Roll no.:"<<arr[i]<<endl;
            cout<<"Toatl marks is:"<<total<<endl;
            cout<<"Percent is:"<<percent<<endl;  
             
        
        
            if(percent>=90 && 100>percent){
                cout<<"Grade A";
            }else if(percent>=80 && 90>percent){
                 cout<<"Grade B";
            }else if(percent>=70 && 80>percent){
                 cout<<"Grade C";
            }else if (percent>=60 && 70>percent){
                     cout<<"Grade D";
            }else if(percent>=50 && 0>percent){
                     cout<<"FAIL!!";
            }else{
                cout<<"ERROR!";
            }
    }
    return 0;
}