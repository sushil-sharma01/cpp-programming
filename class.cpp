#include<iostream>
using namespace std;
class sample{
    private:
    int x;
    public:
    void get(int n){
        x=n;
    }
    int show(){
        return x;
    }
};
int main(){
    sample s;
    s.get(5);
    int a=s.show();
    cout<<a;
}