#include<iostream>
using namespace std;
class Student{
    private:
    int adno;
    char sname[20];
    float eng,math,sci;
    float total;
    float ctotal(int eng,int math,int sci) ;
   
    public:
    void getdata(){
        cout<<"Enter adno:";
        cin>>adno;
        cout<<"Enter sname:";
        cin>>sname;
        cout<<"Enter eng marks:";
        cin>>eng;
        cout<<"Enter math marks:";
        cin>>math;
        cout<<"Enter sci marks:";
        cin>>sci;
        
    }
    void showdata(){
        cout<<"Adnumber:"<<adno<<endl;
        cout<<"Student name:"<<sname<<endl;
        cout<<"Total marks:"<<ctotal(eng,math,sci);
       
    } 
};
    float Student::ctotal(int eng,int math,int sci){
        return eng+math+sci;
   
    }

int main(){
    class Student st;
    st.getdata();
    st.showdata();
    return 0;
}