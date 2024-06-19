#include<iostream>
using namespace std;
int main(){
    int k=0;
    char name1[50];
    char name2[50];
    gets (name1);
    gets(name2);
    for (int i=0;name1[i]!='\0';i++,k++){
        for(int j=0;name2[j]!='\0';j++,k++){
            name1[k]=name2[j];
        }
        name1[k]='\0';
        cout<<name1;
    }
    return 0;
}