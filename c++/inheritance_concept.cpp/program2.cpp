#include <iostream>
#include <string>
using namespace std;
class Person
{
  protected:
  int id;
  string name , address;
  public:
  Person(){
    id = 1234;
    name = "ates karahan";
    address = "Istanbul Turkiye";

  }
  void getinfo(int a , string m , string c){
    id = a;
    name = m;
    address = c;
  }
  void show(){
     cout<< " \n  Personal info is as follows : "  << endl;
    cout<< " ID  is : " << id << endl;
     cout<< " name  is : " << name << endl;
     cout<< " address is : " << address << endl;
  }
};
class Student : public Person
{
  private:
  int rollno, marks;
  public:
  Student() : Person(){ // yeh constructors ka special feature hai initializer list kehte hai
   rollno = marks =0;
  }
  // normal functions k liye yeh sahi nahi hota us ka method alag hai .
  void input(int a , string m , string c, int r , int p){
    getinfo( a , m , c);
    rollno = r;
    marks =p;
  }
  void display(){
    cout<< "\n  academic record is as follows : " << endl;
     cout<< " roll number is  : " << rollno << endl;
      cout<< " marks  are : " << marks << endl;
  }
};
int main(){
    Student s1;
    s1.input(  456 , "mercan" , "lahore" , 4 , 890  );
    s1.show();
    s1.display();
}