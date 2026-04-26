#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    while(true){
        if(n==0){
           break;
        } 
           else {
            cout<<"squre of "<<n<<" is"<<" "<<n*n<<endl;
            cout<<"enter a number :";
            cin>>n;
        }
    }
       return 0;
}