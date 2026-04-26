#include <iostream>
using namespace std;

int main(){
        int i,x;
        for(int i=1;i<=6;i++){
            cout<<"enter a number :";
            cin>>x;
         if(x<=0){
            break;
         }
            else{
            cout<<"you entered:  "<<x<<endl;
         }
        }  
          return 0;
    }
