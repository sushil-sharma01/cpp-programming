#include <iostream>
using namespace std;
// Class template with two parameters
template <typename T1, typename T2>
class Pair {
    T1 firstValue;
    T2 secondValue;
public:
    // Constructor
    Pair(T1 v1, T2 v2) {
        firstValue = v1;
        secondValue = v2;
    }

    // Function to display values
    void show() {
        cout << "First Value: " << firstValue << ", Second Value: " << secondValue << endl;
    }
};
int main() {
    // Integer and float
    Pair<int, float> p1(25, 30.5);
    p1.show();

    // String and char
    Pair<string, char> p2("World", 'B');
    p2.show();

    // Double and int
    Pair<double, int> p3(45.75, 50);
    p3.show();
    return 0;
}