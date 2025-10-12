#include<iostream>
#include<cstring>
using namespace std;
class employee{
    private:
    string first;
    string second;
    public:
    void get(){
        cout<<"Enter the first name:";
        getline(cin,first);
        cout<<"Enter the last name:";
        getline(cin,second);
    }
    void show(){
        cout<<first<<" "<<second;
    }
};
int main(){
    employee e;
    e.get();
    e.show();
}