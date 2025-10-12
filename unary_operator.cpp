#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(){
    a=0;}
    A(int x){
        a=x;
    }
    void print(){
        cout<<"a="<<a<<endl;
    }
    void operator++(){
        ++a;
    }
    void operator++(int){
        a++;
    }
    void operator--(){
        --a;
    }
};

int main(){
    A obj1(10);
    A obj2(22);
    ++obj1;
    --obj2;
    obj1.print();
    obj1++;
    obj1.print();
    obj2.print();
}