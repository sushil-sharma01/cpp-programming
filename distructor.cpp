#include<iostream>
using namespace std;
class cse{
    int a;
    public:
    cse(int x){
        a=x;
    }
    void display(){
        cout<<"a="<<a<<endl;
    }
    ~cse(){
        cout<<"Destructor is activated"<<endl;}
};
int main(){
    cse obj1(20);
    obj1.display();
    return 0;
}