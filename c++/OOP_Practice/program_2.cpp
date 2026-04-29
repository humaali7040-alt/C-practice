#include <iostream>
using namespace std;
class Marks{
    private:
    int a,b,c;
    public:
    void in(){
        cout<<"enter three marks :";
        cin>>a>>b>>c;
     }
     int sum(){
        return a+b+c;
     }
     float avg(){
         return (a+b+c)/3;
     }
     };
      int main(){
        Marks ob1;
        int s,d;
        ob1.in();
       s = ob1.sum();
       d =ob1.avg();
          }