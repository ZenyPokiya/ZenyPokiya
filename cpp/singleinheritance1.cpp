#include<iostream>
using namespace std;

class book{
    protected:
    int bookno;
    char booktitle[20];
    float price;
    int n;
    float totalcost(int n);
    

    public:
    void input(){
      cout<<"Book no.:";
      cin>>bookno;
      cout<<"Book title:";
      cin>>booktitle;
      cout<<"Price of book:";
      cin>>price;
      cout<<"Number of books:";
      cin>>n;

     }
     

     
};

class derive:public book{
    public:
    
   
    void totalcost(){
    input();
     cout<<endl<<"Book no:"<<bookno<<endl;
     cout<<"Book title:"<<booktitle<<endl;
     cout<<"Price of book:"<<price<<endl;
     cout<<"Number of book purchased:"<<n<<endl;
     cout<<"Total cost:"<<totalcost<<endl;
     }
        
    };

float book::totalcost(int n){
   return price*n;
}

int main()
{
    class derive de;
   
    de.totalcost();
return 0;
}