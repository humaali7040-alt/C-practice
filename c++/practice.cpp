#include <iostream>
using namespace std;
class Move
{
    protected:
     int position;
     
     private:
     Move(){
        position=100;
     }
     public:
     void forward(){
        position++;
     }
     public:
     void show(){
        cout<< "position is :" << position << endl;
     }
    };
     class Move2 : public Move
     {
   
      public:
      Move2(){
      cout<< " my name is :" << "huma" ;
         
      }
      void backward(){
        position--;
      }
     };
     
     int main(){
        Move2 m,m2;
       cout << " detail of first object" << endl;
        m.show();
        m.forward();
        m.show();
        m.backward();
        m.show();
        cout << " detail of second object" << endl;
        m2.show();
        m2.forward();
        m2.show();
        m2.backward();
        m2.show();
         
        return 0;
        

     }