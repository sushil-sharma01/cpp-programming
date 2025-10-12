#include <iostream>
using namespace std;

template <typename gen>
void swap(gen a, gen b) {
    gen temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
int main(){
    swap(28,75);
    swap(28.65,75.19);
    swap('A','B');
    return 0;
}
