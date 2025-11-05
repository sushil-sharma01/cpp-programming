#include <iostream>
using namespace std;

int main() {
    try {
        int option;
        cout << "Enter 1 for int, 2 for float, 3 for string, 4 for char exception: ";
        cin >> option;

        if (option == 1)
            throw 42;             // Integer exception
        else if (option == 2)
            throw 6.28f;          // Float exception
        else if (option == 3)
            throw "Sample Error"; // String exception
        else
            throw 'Z';            // Character exception
    }
    catch (int e) {
        cout << "Integer exception caught: " << e << endl;
    }
    catch (float e) {
        cout << "Float exception caught: " << e << endl;
    }
    catch (const char* e) {
        cout << "String exception caught: " << e << endl;
    }
    catch (...) {
        cout << "Unknown type of exception caught!" << endl;
    }

    cout << "Execution continues after handling exceptions." << endl;
    return 0;
}