#include<iostream>
using namespace std;
class A{
    private:
    int a;
    class B{
        int b;
        public:
        B(int x){
            b=x; 
        }
        void display(){
            cout<<"b="<<b<<endl;
        }
    };

    public:
    class C{
        int c;
        public:
        C(int y){
            c=y;
        }
        void display(){
            cout<<"c="<<c;
        }
    };
};

int main(){
    int a,b;
    A obj;
    A::B obj1(2);
    A::C obj2(3);
    obj1.display();
    obj2.display();
}