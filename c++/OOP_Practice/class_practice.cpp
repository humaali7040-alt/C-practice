
class marks
{ 
   private:
    int a,b,c;
    public:
    void in(){
         cout<<"enter three marks : ";
         cin>>a>>b>>c;
    }
    void sum(){
        int sum = a+b+c;
        cout<< " sum is : " << sum << endl;
    }
    void avg(){
        float f= (a+b+c)/3.0;
        cout<< " average is : " << f << endl;
    }
    


};
    int main() {
        marks ob1;
        ob1.in();

        
         ob1.sum(); 
         ob1.avg();
        return 0;
    }