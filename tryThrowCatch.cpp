#include <iostream>
#include <stdexcept>  // For runtime_error
using namespace std;
int main() {
    int num, denom;
    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> denom;

    try {
        if (denom == 0) {
            throw runtime_error("Error: Division by zero is forbidden!");
        }
        double quotient = static_cast<double>(num) / denom;
        cout << "Quotient = " << quotient << endl;
    }
    catch (runtime_error &ex) {
        cout << "Exception caught: " << ex.what() << endl;
    }

    cout << "Program execution continues after handling exception..." << endl;
    return 0;
}