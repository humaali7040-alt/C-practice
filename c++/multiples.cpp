#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter a number :";
    cin>> n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++){
            if(i*j==n){
                cout<< i << "*" << j << endl;
            }
        }
    }
          return 0;
}