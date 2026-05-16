#include <iostream>
using namespace std;
class Parent
{
    protected:
    int n;
    public:
    Parent(){
        n=0;
    }
    Parent(int p){
        n=p;
    }
};
class child: public Parent
{
  private:
  char ch;
  public:
  child() : Parent() {
    ch = 'x';
  }
  child(char a , int m) : Parent(m) {
     ch = a;

  }
  void show() {
    cout<< " ch :" << ch << endl;
    cout << " n : " << n << endl;
  }
 };
 int main(){
    child ob1;
    ob1.show();
    child ob2( 'z' , 300);
    ob2.show();
 }





