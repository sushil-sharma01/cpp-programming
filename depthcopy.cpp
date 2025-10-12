#include<iostream>
using namespace std;
class A{
    int a;
    int *b;
    public:
    A (int x, int y){
        a=x;    b=new int;
        *b=y;
    }
    void display(){
        cout<<"a="<<a<<" ";
        cout<<"*b="<<*b<<endl;
    }

    void update(int z){
        *b = z;
    }
    A(){
        delete b;
    }
};
int main(){
    A obj1(10,20);
    obj1.display();
    A obj2 = obj1;
    obj2.display();

    obj1.update(500);
    cout<<"After update:"<<endl;
    obj1.display();
    obj2.display();
}