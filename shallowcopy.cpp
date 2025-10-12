#include<iostream>
using namespace std;
class A{
    int a,b;
    double c;
    public:
    A(int x,int y,double z){
        a=x; b=y; c=z;
    }
    void display(){
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    }

    void update(int k){
        a=k; b=k+2;
    }
};
int main(){
    A obj1(10, 20, 85.95);
    obj1.display();
    A obj2 = obj1;
    obj2.display();
    
    obj1.update(70);
    cout<<"After modification: "<<endl;
    obj1.display();
    obj2.display();
    return 0;
}