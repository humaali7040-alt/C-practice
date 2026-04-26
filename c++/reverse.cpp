#include <iostream>
using namespace std;
int main(){
    int r,num,reverse;
    reverse=0;
   cout<< "enter a number:";
   cin>>num;
    while(num!=0){
        r=num%10;
        reverse=reverse*10+r;
        num=num/10;
    }
     cout<<"reverse number"<< reverse<<endl;
        return 0;
}