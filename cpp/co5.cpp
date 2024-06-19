#include<iostream>
using namespace std;
class book{

   private:
   int bookno,n;
   char booktitle[20];
   float price;
   float totalcost(int n);


   public:
   void input(){
      cout<<"Book no.:";
      cin>>bookno;
      cout<<"Book title:";
      cin>>booktitle;
      cout<<"Price of book:";
      cin>>price;
     }

  void purchase(){
    cout<<"Number of books purchased:";
    cin>>n;
    }
    

  void totalcost(){
   cout<<endl<<"Book no:"<<bookno<<endl;
   cout<<"Book title:"<<booktitle<<endl;
   cout<<"Price of book:"<<price<<endl;
   cout<<"Number of book purchased:"<<n<<endl;
   cout<<"Total cost:"<<totalcost(n)<<endl;
  }
};

float book::totalcost(int n){
   return price*n;
}

int main(){
   class book bk;
   bk.input();
   bk.purchase();
   bk.totalcost();
   return 0;
}