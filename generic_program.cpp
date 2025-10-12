
#include<iostream>
using namespace std;

template <typename T>
T sum(T x, T y) {
    return x + y;
}
// int sum(int x, int y) {
//     return x + y;
// }
// float sum(float x, float y) {
//     return x + y;
// }
// double sum(double x, double y) {
//     return x + y;
// }
int main() {
    cout <<"Sum of integer: "<< sum(10, 20) << endl;         // Calls int version
    cout <<"Sum of float: "<< sum(72.65,65.19) << endl;   // Calls float version
    cout <<"Sum of double: "<< sum(1500.65,213.79) << endl;     // Calls double version
    return 0;
}