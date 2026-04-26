#include <iostream>
using namespace std;

int main(){
    int n,s,e;
    cout<<"enter a starting number :";
    cin>>s;
    cout<<"enter a ending number :";
    cin>>e;
    n=s;
    do{
    if(n%2!=0);{ 
        cout<<n<<endl;
    }
       n++;
       }
    while(s<=e);
     return 0;
}