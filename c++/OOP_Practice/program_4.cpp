#include <iostream>
using namespace std;
class book{
    private:
    int bookid,pages;
    float price;
    public:
    void get()
    {
        cout<< "enter book id :";
        cin>>bookid;
        cout<< "enter book pages :";
        cin>>pages;
         cout<< "enter book price :";
        cin>>price;
    }
    void show(){
        cout<<"bookid = "<<bookid<<endl;
        cout<<"pages = "<<bookid<<endl;
        cout<<"price = "<<bookid<<endl;
    }
    void set(int id,int pg, float pr){
        bookid=id;
        pages=pg;
        price=pr;
    }
    float getprice(){
        return price;
    }
};
int main(){
    book b1,b2;
    b1.get();
    b2.set( 3,670, 150.80);
    cout<<" the detail of costly book is :"<<endl;
    if(b1.getprice() > b2.getprice())
      b1.show();
      else
      b2.show();
}