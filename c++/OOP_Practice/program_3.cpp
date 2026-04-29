#include <iostream>
using namespace std;
class circle{
    private:
    float radius;
    public:
    void get_radius(float r){
        radius=r;
    }
    void area(){
        cout<<" area of circle :"<< 3.14*radius*radius;
    }
    void circum(){
        cout<<" circumference of circle :"<< 2*3.14*radius;
    }
};
  int main(){
    circle c1;
    float rad;
    cout<<" enter radius :";
    cin>>rad;
    c1.get_radius(rad);
    c1.area();
    c1.circum();
  }