#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    char input[50];

    //Store File Data
    ofstream os;
    os.open("abc.txt");
    cout<<"Enter your name:"<<endl;
    cin.getline(input,100);
    os<<input<<endl;

    cout<<"Enter contact number:"<<endl;
    cin>>input;
    cin.ignore();
    os<<input<<endl;

    os.close();

    //Read File Data
    ifstream is;
    string line;
    is.open("abc.txt");
    cout<<endl<<"Reading from a text file:"<<endl;
    while(getline(is,line))
    {
        cout<<line<<endl;
    } 
    is.close();
return 0;
}