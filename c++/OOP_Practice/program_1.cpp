#include <iostream>
using namespace std;

    class test{
        private:
        int a;
        public:
        void in(){
            cout<<"enter a number :";
            cin>>a;
        }
        int out(){
             return a;
        }
           };
           int main() {
              int s;
            test ob1;
             ob1.in();
             s=ob1.out();
            return 0;
           }