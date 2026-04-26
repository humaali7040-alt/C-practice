#include <iostream>
using namespace std;
int main (){
    int n,e,s;
    cout<< "enter starting number :";
    cin>>s;
    cout<< "enter ending number :";
    cin>>e;
    while(s<=e){
        if(s%2==0)
        cout<<s<<endl;
        s++;
    }
           return 0;
}